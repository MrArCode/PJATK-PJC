//#include <algorithm>
//#include <string>
//#include <vector>
//#include <fmt/ranges.h>
//
//auto main() -> int {
//    auto fileNames = std::vector<std::string>{
//            "lecture 1", "lecture 2", "lecture 3",
//            "lecture 10", "lecture 11", "lecture 12",
//            "lecture 35", "lecture 39", "lecture 92",
//            "lecture 101", "lecture 111", "lecture 133",
//            "lecture 159", "lecture 212", "lecture 221"
//    };
//
//    auto fileNames2 = std::vector<std::string>{
//            "file1_part30.txt", "file10_part10.txt",
//            "file10_part2.txt", "file2_part1.txt",
//            "file20_part21.txt", "file3_part1.txt"
//    };
//
//
//    auto sortByMe = [](std::string a, std::string b) {
//
//        auto makeVector = [](const std::string &word) -> std::vector<std::string> {
//            auto vec = std::vector<std::string>();
//            auto tmp = std::string();
//            auto isDigit = false;
//
//            for (char ch: word) {
//                if (isdigit(ch)) {
//                    if (!isDigit) {
//                        if (!tmp.empty()) {
//                            vec.push_back(tmp);
//                            tmp = "";
//                        }
//                        isDigit = true;
//                    }
//                } else {
//                    if (isDigit) {
//                        if (!tmp.empty()) {
//                            vec.push_back(tmp);
//                            tmp = "";
//                        }
//                        isDigit = false;
//                    }
//                }
//                tmp += ch;
//            }
//            if (!tmp.empty()) {
//                vec.push_back(tmp);
//            }
//            return vec;
//        };
//
//        auto vec1 = makeVector(a);
//        auto vec2 = makeVector(b);
//
//        while (vec1.size() < vec2.size()) {
//            vec1.push_back("");
//        }
//        while (vec2.size() < vec1.size()) {
//            vec2.push_back("");
//        }
//
//        for (int i = 0; i < vec1.size(); ++i) {
//            if (vec1[i] == vec2[i]) {
//                continue;
//            } else {
//                if (!vec1[i].empty() && !vec2[i].empty() &&
//                    ((vec1[i][0] >= '0' && vec1[i][0] <= '9') &&
//                     (vec2[i][0] >= '0' && vec2[i][0] <= '9'))) {
//                    auto tmp1 = std::stoi(vec1[i]);
//                    auto tmp2 = std::stoi(vec2[i]);
//                    return tmp1 < tmp2;
//                } else {
//                    return vec1[i] < vec2[i];
//                }
//            }
//        }
//        return false;
//    };
//
//    std::ranges::sort(fileNames.begin(), fileNames.end(), sortByMe);
//    std::ranges::sort(fileNames2.begin(), fileNames2.end(), sortByMe);
//
//    fmt::println("{}", fmt::join(fileNames, "\n"));
//    fmt::println("{}", "\n");
//    fmt::println("{}", fmt::join(fileNames2, "\n"));
//
//}