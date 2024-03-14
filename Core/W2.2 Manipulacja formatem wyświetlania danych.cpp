//#include "iostream"
//#include "vector"
//#include "fmt/ranges.h"
//#include "set"
//#include <numeric>
//
//auto show(auto x) ->auto{
//    fmt::println("({}) ({}) ({})",x,x,x);
//}
//
//auto main()->int{
//    show(5);
//    show("Tak");
//    fmt::println("{}", "The simplest C++ program is: \"auto main() -> int { }\"");
//
//    auto vec1 = std::vector<int>{1, 7, 1, 3, 7};
//    fmt::println("{}\n${}$", vec1,fmt::join(vec1," - "));
//
//    fmt::print("{}{}?\n", '?', "I'm enclosed in question marks");
//
//    auto number = 3.337;
//    fmt::print("{:.3}\n",number);
//
//    auto number2 = 74;
//    fmt::println("{:b} {} {:x}",number2,number2,number2);
//
//    auto text = std::string("Tak");
//    auto N = text.size();
//    fmt::println("|{:#<20}|",text);
//    fmt::println("|{:#^20}|",text);
//    fmt::println("|{:#>20}|",text);
//}