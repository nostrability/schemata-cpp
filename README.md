# schemata-cpp

[![Test](https://github.com/nostrability/schemata-cpp/actions/workflows/test.yml/badge.svg)](https://github.com/nostrability/schemata-cpp/actions/workflows/test.yml)

C++ data package for [Nostr](https://nostr.com/) protocol JSON schemas. Embeds compiled schemas from [nostrability/schemata](https://github.com/nostrability/schemata).

## Usage

```cpp
#include <schemata/schemata.hpp>

auto schema = schemata::get("kind1Schema"); // std::optional<std::string>
auto all_keys = schemata::keys();           // std::vector<std::string>
```

## Build

```bash
cmake -B build
cmake --build build
cd build && ctest
```

## License

GPL-3.0-or-later
