import ghidra.app.script.GhidraScript;
import ghidra.program.model.mem.*;
public class PrepareACNL extends GhidraScript {
 public void run() throws Exception {
  Memory mem=currentProgram.getMemory();
  MemoryBlock text=mem.getBlock(toAddr(0x100000));
  mem.split(text,toAddr(0x8ba000));
  MemoryBlock ro=mem.getBlock(toAddr(0x8ba000));
  mem.split(ro,toAddr(0x9ca000));
  text.setName(".text"); text.setExecute(true); text.setWrite(false);
  ro=mem.getBlock(toAddr(0x8ba000)); ro.setName(".rodata");ro.setExecute(false);ro.setWrite(false);
  MemoryBlock data=mem.getBlock(toAddr(0x9ca000));data.setName(".data");data.setExecute(false);data.setWrite(true);
  MemoryBlock bss=mem.createUninitializedBlock(".bss",toAddr(0xa01000),0x16d38c,false);bss.setWrite(true);bss.setExecute(false);
  disassemble(toAddr(0x100000));createFunction(toAddr(0x100000),"acnl_entry");
 }
}
