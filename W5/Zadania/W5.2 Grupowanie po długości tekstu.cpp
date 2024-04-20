//#include <iostream>
//#include <vector>
//#include <fmt/ranges.h>
//#include <algorithm>
//#include <ranges>
//#include <set>
//#include <map>
//
//
//int main() {
//    std::vector<std::string> text;
//    std::string word;
//
//    std::cout << "Podaj slowa, zdania, jesli chcesz przerwac wpisz stop\n";
//
//    while (std::cin >> word && word != "stop") {
//        text.push_back(word);
//    }
//
//    auto setTmp = std::set<std::string>(text.begin(), text.end());
//
//    auto sortedText = std::vector<std::string>(setTmp.begin(), setTmp.end());
//
//    std::sort(sortedText.begin(), sortedText.end(), [](const std::string &s1, const std::string &s2) {
//        return s1.size() < s2.size();
//    });
//    auto currLength = sortedText[0].size();
//    for (auto s: sortedText) {
//
//        if (currLength != s.size()) {
//            fmt::println("");
//            currLength = s.size();
//        }
//        fmt::print("{} ", s);
//    }
//
//
//    return 0;
//}