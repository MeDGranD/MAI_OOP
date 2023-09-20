#include "../include/Solution.hpp"
#include <gtest/gtest.h>

int main(){

    int x;
    std::cin >> x;
    std::pair<int, int> ans = lab1::Solution::closest_pair_tonum(x);
    std::cout << ans.first << ' ' << ans.second << std::endl;

    ::testing::InitGoogleTest();

    return RUN_ALL_TESTS();
}