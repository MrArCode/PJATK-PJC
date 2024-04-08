//#include <iostream>
//#include <vector>
//#include "fmt/ranges.h"
//#include <algorithm>
//#include <ranges>
//#include <filesystem>
//#include <fstream>
//#include <set>
//#include <vector>
//
//template<typename Container>
//auto chunk(Container container, int part) {
//
//    using ValueType = std::ranges::range_value_t<Container>;
//
//    std::vector<std::vector<ValueType>> answer;
//
//    auto it = container.begin();
//    while (it != container.end()) {
//        std::vector<ValueType> tmpVec;
//        for (int i = 0; i < part && it != container.end(); ++i, ++it) {
//            tmpVec.push_back(*it);
//        }
//        answer.push_back(tmpVec);
//    }
//
//    return answer;
//}
//
//
//auto main() -> int {
//    auto v1 = std::vector<int>{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//    auto v2 = std::vector<std::string>{"a", "b", "c", "d", "e", "f"};
//    auto v3 = std::set<float>{1.41, 1.61, 1.73, 2.72, 3.14};
//
//    auto v1by3 = chunk(v1, 3);
//    auto v1by2 = chunk(v1, 2);
//
//    auto v2by5 = chunk(v2, 5);
//    auto v2by1 = chunk(v2, 1);
//
//    auto v3by2 = chunk(v3, 2);
//    auto v3by3 = chunk(v3, 3);
//
//    fmt::println("{}", v1by3);
//    fmt::println("{}", v1by2);
//    fmt::println("{}", v2by5);
//    fmt::println("{}", v2by1);
//    fmt::println("{}", v3by2);
//    fmt::println("{}", v3by3);
//}