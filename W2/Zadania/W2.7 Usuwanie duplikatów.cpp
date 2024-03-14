//#include "iostream"
//#include "vector"
//#include "fmt/ranges.h"
//#include "set"
//#include <numeric>
//
//auto main()->int{
//    auto names = std::string("Adam Illia Ewa Anastasia Illia Ewa Illia Maciej Adam Natalia");
//    auto vec1 = std::vector<std::string>();
//    auto word = std::string("");
//    for (auto i = names.begin(); i != names.end() ; ++i) {
//        if(*i == ' ' || i == names.end() - 1){
//            vec1.push_back(word);
//            word = "";
//        } else{
//            word.push_back(*i);
//        }
//    }
//    auto set1 = std::set<std::string>(vec1.begin(),vec1.end());
//
//    fmt::println("{}", set1);
//
//}