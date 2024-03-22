//#include <iostream>
//#include <vector>
//#include <fmt/ranges.h>
//#include <algorithm>
//#include <ranges>
//#include <set>
//
//auto exampleMain(std::vector<std::string> &left, std::vector<std::string> &right) -> void {
//    auto eraseDuplicates = [](std::vector<std::string> &vec) -> void {
//        auto tmpSet = std::set<std::string>(vec.begin(), vec.end());
//        vec = std::vector<std::string>(tmpSet.begin(), tmpSet.end());
//    };
//    eraseDuplicates(left);
//    eraseDuplicates(right);
//    auto sortVector = [](std::vector<std::string> &vector) {
//        auto iter = std::find_if(vector.begin(), vector.end(), [](std::string &s) {
//            return s[0] >= 'A';
//        });
//        std::reverse(vector.begin(), iter);
//        std::reverse(iter, vector.end());
//        std::reverse(vector.begin(), vector.end());
//    };
//    sortVector(left.size() < right.size() ? right : left);
//}
//
//auto main() -> int {
//    auto vec1 = std::vector<std::string>{"ak1", "e2", "3a", "1b"};
//    auto vec2 = std::vector<std::string>{"3a", "1b", "2h", "ak1", "e2",};
//
//    fmt::println("{}", vec1);
//    fmt::println("{}", vec2);
//    exampleMain(vec1, vec2);
//    fmt::println("{}", vec2);
//}