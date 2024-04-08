//#include <iostream>
//#include <vector>
//#include <fmt/ranges.h>
//#include <algorithm>
//#include <ranges>
//#include <filesystem>
//#include <fstream>
//
//namespace fs = std::filesystem;
//
//auto sumOfPalindrome(const std::string &filename, int &amountOfPalindrome) -> std::vector<std::string> {
//    std::ifstream file(filename);
//    auto listsOfWords = std::vector<std::string>();
//
//    auto word = std::string("");
//    while (file >> word) {
//        auto pointer1 = int(0);
//        auto pointer2 = word.size() - 1;
//        auto isPalindrome = true;
//
//        while (pointer1 < pointer2) {
//            if (word[pointer1] != word[pointer2]) {
//                isPalindrome = false;
//                break;
//            }
//            pointer1++;
//            pointer2--;
//        }
//        if (isPalindrome) {
//            listsOfWords.push_back(word);
//            amountOfPalindrome++;
//        }
//    }
//    return listsOfWords;
//}
//
//int main() {
//    std::vector<std::string> files;
//    for (const auto &entry: fs::directory_iterator(
//            "/Users/arturcegielka-posluszny/CLionProjects/Wyklad/W4/Zadania/Numbers")) {
//        if (entry.is_regular_file()) {
//            files.push_back(entry.path().string());
//        }
//    }
//
//    for (const auto &file: files) {
//        auto amountOfPalindrome = int();
//        auto listOfWords = sumOfPalindrome(file, amountOfPalindrome);
//        fmt::println("{}: Amount of words: {}, Lists of words: {}", file, amountOfPalindrome, listOfWords);
//
//    }
//
//}
