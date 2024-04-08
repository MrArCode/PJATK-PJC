#include <iostream>
#include <vector>
#include <fmt/ranges.h>
#include <algorithm>
#include <ranges>

auto main()->int{
    auto vec = std::vector<int>{3, 5, 1, 4, 2, 0};


    std::ranges::sort(vec.begin(),vec.begin()+vec.size()/2);
    std::ranges::reverse(vec.begin()+vec.size()/2,vec.end());

    fmt::println("{}",vec);


}
