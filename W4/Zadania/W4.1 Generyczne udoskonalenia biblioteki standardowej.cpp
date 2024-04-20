//#include <iostream>
//#include <vector>
//#include <fmt/ranges.h>
//#include <algorithm>
//#include <ranges>
//
//
//namespace pjc::ranges {
//    template<typename T>
//    auto sort(T vector) {
//        std::ranges::sort(vector);
//        return vector;
//    }
//
//    template<typename T>
//    auto reverse(T vector) {
//        std::ranges::reverse(vector);
//        return vector;
//    }
//}
//
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
//    auto vectorString = std::vector<std::string>{"tak", "nie", "a", "nie wiem"};
//    fmt::print("Original Vector: {}\n", vectorString);
//
//    auto sortedVecString = pjc::ranges::sort(vectorString);
//    fmt::print("Sorted Vector: {}\n", sortedVecString);
//
//    auto reversedVecString = pjc::ranges::reverse(vectorString);
//    fmt::print("Reversed Vector: {}\n", reversedVecString);
//
//    fmt::print("Original Vector: {}\n", vectorString);
//
//    return 0;
//}
//
