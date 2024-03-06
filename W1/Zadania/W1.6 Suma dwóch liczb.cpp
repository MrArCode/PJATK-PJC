#include "iostream"
#include "vector"
#include "ranges"

auto sumOfTwo(std::vector<int> tab, int val) -> bool {

    std::ranges::sort(tab);

    auto tracker = 0;

    for (int i = 0; i < tab.size(); ++i) {

        if (tab[i] + tab[tab.size() - tracker - 1] == val) {
            std::cout << i << " " << tab.size() - tracker - 1<<"\n";
            return true;
        } else if (tab[i] + tab[tab.size() - tracker - 1] < val) {
            continue;
        } else {
            tracker += 1;
            i--;
        }
    }

    std::cout << "There is no such index";
    return false;
}

auto main() -> int {
    using namespace std;

    auto tab = std::vector<int>{2, 4, 5, 8, 9, 11, 13, 15};
    auto state = sumOfTwo(tab, 21);
    cout << state;

}
