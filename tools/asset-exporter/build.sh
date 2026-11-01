#!/usr/bin/env bash
set -euo pipefail
script_dir=$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" && pwd)
cache_dir=${ASSET_TOOL_CACHE:-/workspace/tools/spica-export}
dotnet_bin=${DOTNET_BIN:-/workspace/tools/dotnet/dotnet}
spica_commit=82acbd63695e4ef8b95a92ce884f25ec1044788f
mkdir -p "$cache_dir"
if [[ ! -d "$cache_dir/upstream/.git" ]]; then
    git clone https://github.com/gdkchan/SPICA.git "$cache_dir/upstream"
fi
git -C "$cache_dir/upstream" fetch origin "$spica_commit"
git -C "$cache_dir/upstream" checkout --detach "$spica_commit"
cp -a "$cache_dir/upstream/SPICA" "$cache_dir/"
cp "$script_dir/Exporter.csproj" "$script_dir/Program.cs" "$cache_dir/"
"$dotnet_bin" build "$cache_dir/Exporter.csproj" -c Release
printf 'Converter: %s/bin/Release/net8.0/Exporter.dll\n' "$cache_dir"
