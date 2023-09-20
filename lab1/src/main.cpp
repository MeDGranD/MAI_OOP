#include "../include/Solution.hpp"


int main(){

    int x;
    std::cin >> x;
    std::pair<int, int> ans = lab1::Solution::closest_pair_tonum(x);
    std::cout << ans.first << ' ' << ans.second << std::endl;

    return 0;
}