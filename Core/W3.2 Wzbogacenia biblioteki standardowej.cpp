//#include <iostream>
//#include <vector>
//#include <fmt/ranges.h>
//#include <algorithm>
//#include <ranges>
//
//namespace pjc {
//    namespace ranges {
//        auto sort(std::vector<int> vector) -> std::vector<int> {
//            std::ranges::sort(vector);
//            return vector;
//        }
//
//        auto reverse(std::vector<int> vector) -> std::vector<int> {
//            std::ranges::reverse(vector);
//            return vector;
//        }
//    }
//}
//
//auto main() -> int {
//    auto vector = std::vector<int>{2, 4, 6, 1, 2, 5, 8, 9, 0, 12};
//    fmt::print("Original Vector: {}\n", vector);
//
//    auto sortedVector = pjc::ranges::sort(vector);
//    fmt::print("Sorted Vector: {}\n", sortedVector);
//
//    auto reversedVector = pjc::ranges::reverse(vector);
//    fmt::print("Reversed Vector: {}\n", reversedVector);
//
//    fmt::print("Original Vector: {}\n", vector);
//
//    return 0;
//}
