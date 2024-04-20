//#include <iostream>
//#include <utility>
//#include <vector>
//#include <fmt/ranges.h>
//#include <algorithm>
//#include <ranges>
//#include <set>
//#include <map>
//
//
//bool maCyklDFS(std::string wierzcholek, std::map<std::string, std::set<std::string>> &graf,
//               std::set<std::string> &odwiedzone, std::set<std::string> &stosRekursji) {
//
//    odwiedzone.insert(wierzcholek);
//    stosRekursji.insert(wierzcholek);
//
//    for (const auto &sasiad: graf[wierzcholek]) {
//
//        if (odwiedzone.find(sasiad) == odwiedzone.end()) {
//            if (maCyklDFS(sasiad, graf, odwiedzone, stosRekursji))
//                return true;
//        } else if (stosRekursji.find(sasiad) != stosRekursji.end()) {
//            return true;
//        }
//    }
//    stosRekursji.erase(wierzcholek);
//
//    return false;
//}
//
//
//bool maCykl(std::map<std::string, std::set<std::string>> &graf) {
//
//    std::set<std::string> odwiedzone;
//    std::set<std::string> stosRekursji;
//
//    for (auto &wierzcholek: graf) {
//        if (odwiedzone.find(wierzcholek.first) == odwiedzone.end()) {
//            if (maCyklDFS(wierzcholek.first, graf, odwiedzone, stosRekursji))
//                return true;
//        }
//    }
//    return false;
//}
//
//int main() {
//    std::map<std::string, std::set<std::string>> graf;
//    graf["A"] = {"B", "C"};
//    graf["B"] = {"E"};
//    graf["C"] = {"D"};
//    graf["D"] = {"B"};
//    graf["E"] = {"C"};
//
//    if (maCykl(graf))
//        std::cout << "Graf zawiera cykl.\n";
//    else
//        std::cout << "Graf nie zawiera cyklu.\n";
//
//    return 0;
//}
