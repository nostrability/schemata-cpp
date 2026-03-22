#include "schemata/schemata.hpp"
#include "schemata/schemas_data.hpp"
#include <algorithm>

namespace schemata {

std::optional<std::string> get(const std::string& key) {
    const auto& data = detail::raw_schemas();
    auto it = data.find(key);
    if (it == data.end()) return std::nullopt;
    return it->second;
}

std::vector<std::string> keys() {
    const auto& data = detail::raw_schemas();
    std::vector<std::string> result;
    result.reserve(data.size());
    for (const auto& [k, _] : data) {
        result.push_back(k);
    }
    std::sort(result.begin(), result.end());
    return result;
}

} // namespace schemata
