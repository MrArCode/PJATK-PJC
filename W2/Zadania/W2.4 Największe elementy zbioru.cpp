//#include "iostream"
//#include "vector"
//#include "fmt/ranges.h"
//#include "set"
//
//
//auto suffix(std::set<int> set, std::vector<int> vec) -> bool {
//    auto iteratorSetu = set.end();
//    for (int i = vec.size() - 1; i >= 0; --i) {
//        if (vec[i] != *--iteratorSetu) {
//            return false;
//        }
//
//    }
//    return true;
//}
//
//auto main() -> int {
//    std::set<int> set1 = {1, 2, 5, 8, 9, 3, 1};
//    fmt::println("{}",set1);
//
//    auto testVector = std::vector<int>{5,8,9};
//    auto result = suffix(set1,testVector);
//    fmt::println("{}",result);
//}