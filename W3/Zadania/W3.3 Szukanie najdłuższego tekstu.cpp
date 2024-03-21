//#include <iostream>
//#include <vector>
//#include <fmt/ranges.h>
//#include <string>
//#include "algorithm"
//#include "ranges"
//
//
//namespace v1 {
//    auto printLongestString(std::vector<std::string> &vector) -> std::string {
//        return std::ranges::max(vector, std::ranges::less(), std::ranges::size);
//    }
//}
//
//namespace v2 {
//    auto printLongestString(std::vector<std::string> &vector) -> std::string {
//        return *std::ranges::max_element(vector, std::ranges::less(), std::ranges::size);
//
//    }
//}
//
//namespace v3 {
//    auto printLongestString(std::vector<std::string> &vector) -> std::string {
//        return std::ranges::min(vector, std::ranges::less(), std::ranges::size);
//
//    }
//}
//
//namespace v4 {
//    auto printLongestString(std::vector<std::string> &vector) -> std::string {
//        return *std::ranges::min_element(vector, std::ranges::less(), std::ranges::size);
//
//    }
//}
//
//
//auto main() -> int {
//
//    auto vectorTest = std::vector<std::string>{"test", "japan", "faith", "asia", "germany"};
//
//    auto word1 = v1::printLongestString(vectorTest);
//    fmt::println("{}", word1);
//
//    auto word2 = v2::printLongestString(vectorTest);
//    fmt::println("{}", word2);
//
//    auto word3 = v3::printLongestString(vectorTest);
//    fmt::println("{}", word3);
//
//    auto word4 = v4::printLongestString(vectorTest);
//    fmt::println("{}", word4);
//
//}
