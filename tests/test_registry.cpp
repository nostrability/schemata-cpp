#include "schemata/schemata.hpp"
#include <cassert>
#include <iostream>

int main() {
    // Test get known schema
    auto kind1 = schemata::get("kind1Schema");
    assert(kind1.has_value());
    assert(kind1->find("$schema") != std::string::npos || kind1->find("allOf") != std::string::npos);

    auto note = schemata::get("noteSchema");
    assert(note.has_value());

    // Test get nonexistent
    auto missing = schemata::get("nonexistent");
    assert(!missing.has_value());

    // Test keys count
    auto all_keys = schemata::keys();
    assert(all_keys.size() > 100);

    // Test keys are sorted
    for (size_t i = 1; i < all_keys.size(); ++i) {
        assert(all_keys[i - 1] <= all_keys[i]);
    }

    std::cout << "All tests passed (" << all_keys.size() << " schemas)" << std::endl;
    return 0;
}
