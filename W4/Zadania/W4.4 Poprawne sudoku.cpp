//#include <iostream>
//#include <vector>
//#include "fmt/ranges.h"
//#include <algorithm>
//#include <ranges>
//#include <filesystem>
//#include <fstream>
//#include <set>
//
//auto main() -> int {
//
//    auto file = std::fstream("/Users/arturcegielka-posluszny/CLionProjects/Wyklad/W4/Zadania/Sudoku/S1");
//    auto line = std::string();
//    auto isSudokuCorrect = true;
//
//    auto vec = std::vector<std::vector<int>>();
//
//    while (std::getline(file, line)) {
//        auto tmpVector = std::vector<int>();
//        for (int i = 0; i < line.size(); ++i) {
//            if (line[i] != ' ') {
//                tmpVector.push_back(line[i]);
//            }
//        }
//        vec.push_back(tmpVector);
//    }
//
//    for (int i = 0; i < vec.size(); ++i) {
//        auto tmpSet = std::set<int>(vec[i].begin(), vec[i].end());
//        if (tmpSet.size() != 9) {
//            isSudokuCorrect = false;
//            break;
//        }
//    }
//
//    for (int i = 0; i < vec.size(); ++i) {
//        auto tmpSet = std::set<int>();
//        for (int j = 0; j < vec.size(); ++j) {
//            tmpSet.insert(vec[j][i]);
//        }
//        if (tmpSet.size() != 9) {
//            isSudokuCorrect = false;
//            break;
//        }
//    }
//
//    for (int i = 0; i < 9; i += 3) {
//        for (int j = 0; j < 9; j += 3) {
//            std::set<int> tmpSet;
//            for (int x = i; x < i + 3; ++x) {
//                for (int y = j; y < j + 3; ++y) {
//                    tmpSet.insert(vec[x][y]);
//                }
//            }
//            if (tmpSet.size() != 9) {
//                isSudokuCorrect = false;
//                break;
//            }
//        }
//    }
//
//
//    fmt::println("{}", isSudokuCorrect);
//
//
//}
