#include <iostream>
#include <vector>
#include <fmt/ranges.h>
#include <algorithm>
#include <ranges>
#include <set>

namespace PJC {
    auto modify(std::vector<int> &vec) -> void {
        auto set = std::set<int>(vec.begin(), vec.end());
        vec = std::vector<int>(set.begin(), set.end());
    }
}


auto main() -> int {
    auto vec = std::vector<int>{1,2,5,7,9,12};
    auto iter = vec.begin();
    vec.erase(iter);
    fmt::print("{}", vec);
}

