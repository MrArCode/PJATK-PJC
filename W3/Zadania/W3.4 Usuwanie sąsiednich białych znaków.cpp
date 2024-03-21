//#include <iostream>
//#include <vector>
//#include <fmt/ranges.h>
//#include <string>
//#include "algorithm"
//#include "ranges"
//
//std::string reduceAdjacentWhitespaces(std::string text) {
//    std::string result;
//    bool isSpace = false;
//
//    for (char c : text) {
//        if (c == ' ' || c == '\t' || c == '\n') {
//            if (!isSpace) {
//                result += ' ';
//                isSpace = true;
//            }
//        } else {
//            result += c;
//            isSpace = false;
//        }
//    }
//
//    return result;
//}
//
//auto main() -> int {
//    fmt::println(
//            "[{}]\n[{}]\n[{}]\n[{}]",
//            reduceAdjacentWhitespaces("Abc"),
//            reduceAdjacentWhitespaces("A b c"),
//            reduceAdjacentWhitespaces("   A\tb c      "),
//            reduceAdjacentWhitespaces("A\t\tb\n \n  \t c")
//    );
//}