//#include "iostream"
//#include "vector"
//#include "fmt/ranges.h"
//#include "set"
//#include <numeric>
//
//auto sortBiggerHalf(std::vector<int> &vec1) -> std::vector<int> {
//    if (vec1.size() % 2 == 0) {
//        auto half = vec1.size() / 2;
//        int sum_first_half = std::accumulate(vec1.begin(), vec1.begin() + half, 0);
//        int sum_second_half = std::accumulate(vec1.begin() + half, vec1.end(), 0);
//
//        if (sum_first_half == sum_second_half) {
//            std::ranges::sort(vec1.begin(), vec1.begin() + half);
//            std::ranges::sort(vec1.begin() + half, vec1.end());
//        } else if (sum_first_half > sum_second_half) {
//            std::ranges::sort(vec1.begin(), vec1.begin() + half);
//        } else {
//            std::ranges::sort(vec1.begin() + half, vec1.end());
//        }
//    } else {
//        auto biggerHalf = vec1.size() / 2 + 1;
//        std::ranges::sort(vec1.begin(), vec1.begin() + biggerHalf);
//    }
//    return vec1;
//}
//
//auto main() -> int {
//    auto firstHalfBigger = std::vector<int>{3, 2, 1, 0, 1, 0};
//    auto secondHalfBigger = std::vector<int>{3, 2, 1, 6, 5, 4};
//    auto bothHalvesSame = std::vector<int>{5, 4, 5, 4};
//    auto test = std::vector<int>{5, 5, 4, 5, 4};
//
//    sortBiggerHalf(firstHalfBigger);
//    sortBiggerHalf(secondHalfBigger);
//    sortBiggerHalf(bothHalvesSame);
//    sortBiggerHalf(test);
//
//    fmt::println(
//            "{}\n{}\n{}\n{}",
//            firstHalfBigger,
//            secondHalfBigger,
//            bothHalvesSame,
//            test
//    );
//}