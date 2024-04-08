//#include <iostream>
//#include <vector>
//#include <fmt/ranges.h>
//#include <algorithm>
//#include <ranges>
//#include <filesystem>
//#include <fstream>
//
//
//
//auto main() -> int {
//    auto path = std::fstream ("/Users/arturcegielka-posluszny/CLionProjects/Wyklad/W4/Zadania/Numbers/N3.txt");
//    auto numberCounter = int(0);
//    auto listOfPossibleArmstrongNumber = std::vector<std::string>();
//
//    auto word = std::string();
//    while (path >> word){
//        auto isDigit = true;
//        for (char i : word) {
//            if(i<'0' || i > '9'){
//                isDigit = false;
//                break;
//            }
//        }
//        if(isDigit){
//            listOfPossibleArmstrongNumber.push_back(word);
//        }
//
//    }
//
//    for (auto number : listOfPossibleArmstrongNumber) {
//        auto tmpSum = int();
//        auto totalSum = int();
//        for (int i = 0; i <number.size() ; ++i) {
//            auto digit = number[i] - '0';
//            auto tmpBase = 1;
//            for (int j = 0; j < number.size() ; ++j) {
//                tmpBase *= digit;
//            }
//            totalSum += tmpBase;
//
//        }
//        if(totalSum == std::stoi(number)){
//            numberCounter++;
//        }
//
//    }
//    fmt::println("{}",numberCounter);
//}
