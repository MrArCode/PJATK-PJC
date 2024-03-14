//#include <iostream>
//#include <string>
//#include "vector"
//#include "fmt/ranges.h"
//
//std::string reversedWords(std::string word) {
//    int begin = 0;
//    int size = word.size();
//    for (int i = 0; i < size; i++) {
//        if (word[i] == ' ') {
//            std::reverse(word.begin() + begin, word.begin() + i);
//            begin = i + 1;
//        }
//    }
//    std::reverse(word.begin() + begin, word.end());
//    std::reverse(word.begin(), word.end());
//    return word;

//    auto stringAsList = std::vector<std::string>();
//    std::string currentWord = "";
//    std::string result = "";
//    for (char letter: word) {
//        if(letter == ' '){
//            stringAsList.push_back(currentWord);
//            currentWord = "";
//        }else{
//            currentWord += letter;
//        }
//    }
//    stringAsList.push_back(currentWord);
//
//    for (int i = stringAsList.size() - 1; i >= 0; --i) {
//        result += stringAsList[i];
//        result += " ";
//    }
//
//    return result;




//auto main() -> int {
//    fmt::println(
//            "{}\n{}\n{}\n{}",
//            reversedWords("Ala ma kota i psa"),
//            reversedWords("Ala"),
//            reversedWords(""),
//            reversedWords("1 2 3")
//    );
//}