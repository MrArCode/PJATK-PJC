//#include <iostream>
//#include <vector>
//
//auto boxPrint(std::vector<std::string> tab, char znak = '*') -> void {
//    auto theLongestWord = int(0);
//    for (std::string word : tab) {
//        if (theLongestWord < word.size()) {
//            theLongestWord = word.size();
//        }
//    }
//
//    for (int i = 0; i < theLongestWord + 2; ++i) {
//        std::cout << znak;
//    }
//
//    std::cout << "\n";
//
//    for (int i = 0; i < tab.size(); ++i) {
//        std::cout << znak << tab[i];
//
//        for (int j = 0; j < theLongestWord - tab[i].size(); ++j) {
//            std::cout << " ";
//        }
//
//        std::cout << znak << "\n";
//    }
//
//    for (int i = 0; i < theLongestWord + 2; ++i) {
//        std::cout << znak;
//    }
//}
//
//auto main() -> int {
//    boxPrint({"a", "quick", "brown", "fox"});
//    std::cout << "\n";
//
//    boxPrint({"a", "quick", "brown", "fox"}, '*');
//    std::cout << "\n";
//
//    boxPrint({"a", "quick", "brown", "fox"}, '#');
//    std::cout << "\n";
//
//    boxPrint(std::vector<std::string>{"a", "quick", "brown", "fox"}, '#');
//    std::cout << "\n";
//
//    boxPrint({""});
//    std::cout << "\n";
//
//    boxPrint({});
//    std::cout << "\n";
//
//    boxPrint({}, '#');
//    std::cout << "\n";
//
//    boxPrint({"", "hmmmm", ""});
//    std::cout << "\n";
//
//    boxPrint({"", "", ""});
//}
