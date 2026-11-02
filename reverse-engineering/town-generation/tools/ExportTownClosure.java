import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.address.*;
import ghidra.program.model.symbol.*;
import ghidra.program.model.data.*;
import java.io.*;
import java.util.*;

public class ExportTownClosure extends GhidraScript {
 void signature(long address,String name,DataType result,DataType... types) throws Exception {
  Function f=getFunctionAt(toAddr(address));if(f==null)throw new Exception("Missing function "+Long.toHexString(address));
  f.setName(name,SourceType.USER_DEFINED);f.setReturnType(result,SourceType.USER_DEFINED);
  Parameter[] params=new Parameter[types.length];
  for(int i=0;i<types.length;i++)params[i]=new ParameterImpl("arg"+i,types[i],currentProgram);
  f.replaceParameters(Function.FunctionUpdateType.DYNAMIC_STORAGE_ALL_PARAMS,true,SourceType.USER_DEFINED,params);
 }
 public void run() throws Exception {
  DataType p=new PointerDataType(VoidDataType.dataType),u=UnsignedIntegerDataType.dataType,v=VoidDataType.dataType;
  signature(0x5be4f0,"rng_seed_u32",v,p,u);signature(0x5be58c,"rng_next_u32",u,p);
  signature(0x593474,"terrain_generate",v,p,p,u,p);
  signature(0x231f0c,"acre_choose_variant",u,u,p);
  signature(0x231f90,"acre_expand_template",v,p,p,p);
  signature(0x232288,"category_replace_one",v,p,u,u,p);
  signature(0x2320ec,"category_finalize_neighbors",v,p);
  signature(0x232678,"category_promote_08_13",v,p,p);
  signature(0x23299c,"category_promote_2b_26",v,p,p);
  signature(0x232c8c,"category_promote_22_23_27",v,p,p);
  signature(0x232f7c,"category_promote_2c_2a",v,p,p);
  signature(0x2d7f88,"town_candidate_step",u,p,u);
  signature(0x2d79bc,"town_generate_until_accepted",v,p,u);
  signature(0x2d87d8,"town_prepare_candidate_seeds",v);
  FunctionManager fm=currentProgram.getFunctionManager();
  long[] roots={0x63918c,0x639344,0x639978,0x639fdc,0x2d79bc,0x2d7f88,0x2d87d8};
  Set<Function> selected=new TreeSet<>((a,b)->a.getEntryPoint().compareTo(b.getEntryPoint()));
  ArrayDeque<Function> todo=new ArrayDeque<>();for(long a:roots)todo.add(fm.getFunctionAt(toAddr(a)));
  if(getScriptArgs().length>1) {
   for(String line:java.nio.file.Files.readAllLines(new File(getScriptArgs()[1]).toPath())) {
    if(!line.trim().isEmpty()) {
     Function f=fm.getFunctionAt(toAddr(Long.parseLong(line.trim(),16)));
     if(f!=null)todo.add(f);
    }
   }
  }
  while(!todo.isEmpty()) {Function f=todo.remove();if(!selected.add(f))continue;todo.addAll(f.getCalledFunctions(monitor));}
  File out=new File(getScriptArgs()[0]);File cdir=new File(out,"decompiled");cdir.mkdirs();File asm=new File(out,"assembly");asm.mkdirs();
  DecompInterface dec=new DecompInterface();dec.openProgram(currentProgram);
  int failures=0,indirect=0,done=0;
  try(PrintWriter graph=new PrintWriter(new File(out,"static-callgraph.tsv"));PrintWriter unresolved=new PrintWriter(new File(out,"computed-flow-sites.tsv"))) {
   graph.println("entry\tname\tdirect_callees");unresolved.println("function\taddress\tflow_type\tinstruction");
   for(Function f:selected) {
    if(monitor.isCancelled())break;
    List<String> callees=new ArrayList<>();for(Function callee:f.getCalledFunctions(monitor))callees.add(callee.getEntryPoint().toString());Collections.sort(callees);
    graph.println(f.getEntryPoint()+"\t"+f.getName()+"\t"+String.join(",",callees));
    try(PrintWriter w=new PrintWriter(new File(asm,f.getEntryPoint()+".s"))) {
     for(Instruction i:currentProgram.getListing().getInstructions(f.getBody(),true)) {
      w.println(i.getAddress()+"  "+i.toString());
      if(i.getFlowType().isComputed()&&(i.getFlowType().isCall()||i.getFlowType().isJump())) {unresolved.println(f.getEntryPoint()+"\t"+i.getAddress()+"\t"+i.getFlowType()+"\t"+i.toString());indirect++;}
     }
    }
    DecompileResults result=dec.decompileFunction(f,90,monitor);
    try(PrintWriter w=new PrintWriter(new File(cdir,f.getEntryPoint()+".c"))) {
     w.println("/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */");
     w.println("/* Address "+f.getEntryPoint()+". Provisional types; not original source or a verified portable implementation. */");
     if(result.decompileCompleted())w.println(result.getDecompiledFunction().getC());else {w.println("/* DECOMPILATION FAILED: "+result.getErrorMessage()+" */");failures++;}
    }
    done++;if(done%100==0)println("Exported "+done+"/"+selected.size());
   }
  }
  try(PrintWriter w=new PrintWriter(new File(out,"export-summary.txt"))) {
   w.println("Functions in static direct-call closure: "+selected.size());w.println("Exported: "+done);w.println("Decompiler failures: "+failures);w.println("Computed flow sites needing review: "+indirect);
   w.println("Roots: 0063918c 00639344 00639978 00639fdc 002d79bc 002d7f88 002d87d8");
   w.println("Optional first-slot function-pointer candidate roots included when supplied as second script argument.");
   w.println("Computed calls, jump-table flows, inferred types, and runtime state are not verified by this export.");
  }
  dec.dispose();
 }
}
