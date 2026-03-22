#!/usr/bin/env python3
"""Generate schemas_data.hpp from registry TSV and schema JSON files."""
import os
import sys

def main():
    tsv_path, dist_dir, output_path = sys.argv[1], sys.argv[2], sys.argv[3]
    entries = []
    for line in open(tsv_path):
        parts = line.strip().split('\t')
        if len(parts) == 2:
            key, path = parts
            path = path.lstrip('.').lstrip('/')
            full = os.path.join(dist_dir, path)
            if os.path.exists(full):
                with open(full) as f:
                    content = f.read().strip()
                entries.append((key, content))

    with open(output_path, 'w') as f:
        f.write('#pragma once\n')
        f.write('// Generated from nostrability/schemata — do not edit manually.\n')
        f.write('#include <string>\n#include <unordered_map>\n\n')
        f.write('namespace schemata {\nnamespace detail {\n\n')
        f.write('inline const std::unordered_map<std::string, std::string>& raw_schemas() {\n')
        f.write('    static const std::unordered_map<std::string, std::string> data = {\n')
        for key, data in entries:
            escaped = data.replace('\\', '\\\\').replace('"', '\\"')
            f.write(f'        {{"{key}", "{escaped}"}},\n')
        f.write('    };\n    return data;\n}\n\n')
        f.write('} // namespace detail\n} // namespace schemata\n')

    print(f'Generated {len(entries)} entries -> {output_path}')

if __name__ == '__main__':
    main()
