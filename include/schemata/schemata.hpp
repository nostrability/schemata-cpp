#pragma once

#include <optional>
#include <string>
#include <vector>

namespace schemata {

/// Returns the raw JSON schema string for the given key, or nullopt.
std::optional<std::string> get(const std::string& key);

/// Returns all available schema registry keys.
std::vector<std::string> keys();

} // namespace schemata
