//#include "iostream"
//#include "vector"
//#include "fmt/ranges.h"
//
//
//auto iteration(std::vector<int>& vec1, int& n) -> std::vector<int> {
//    auto size = vec1.size();
//    auto vecHelper = std::vector<int>();
//    for (int i = 0; i < size; i+=n) {
//        vecHelper.push_back(i);
//    }
//
//    for (int i = 0; i < vecHelper.size() ; ++i) {
//        vec1.erase(vec1.begin() + vecHelper[i] - i);
//    }
//
//    if (n != 1) {
//        n -= 1;
//    }
//
//    return vec1;
//}
//
//auto main()->int{
//    auto n = 4;
//    auto vector = std::vector<int>{1,2,3,4,5,6,7,8,9,0};
//    fmt::println("{}",vector);
//    fmt::println("{}", iteration(vector,n));
//    fmt::println("{}", iteration(vector,n));
//    fmt::println("{}", iteration(vector,n));
//    fmt::println("{}", iteration(vector,n));
//}