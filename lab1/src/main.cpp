#include "../include/Solution.hpp"
#include <gtest/gtest.h>

TEST(Lab1, zero){
    std::pair<int, int> ans = lab1::Solution::closest_pair_tonum(0);
    ASSERT_EQ(ans.first, 0);
    ASSERT_EQ(ans.second, 0);
}
TEST(Lab1, negative){
    std::pair<int, int> ans = lab1::Solution::closest_pair_tonum(-1);
    ASSERT_EQ(ans.first, 0);
    ASSERT_EQ(ans.second, 0);
}
TEST(Lab1, example1){
    std::pair<int, int> ans = lab1::Solution::closest_pair_tonum(10);
    ASSERT_EQ(ans.first, 5);
    ASSERT_EQ(ans.second, 4);
}
TEST(Lab1, example2){
    std::pair<int, int> ans = lab1::Solution::closest_pair_tonum(50);
    ASSERT_EQ(ans.first, 45);
    ASSERT_EQ(ans.second, 36);
}
TEST(Lab1, bigNumber){
    std::pair<int, int> ans = lab1::Solution::closest_pair_tonum(1e4);
    ASSERT_NE(ans.first, 0);
    ASSERT_NE(ans.second, 0);
}

int main(){

    int x;
    std::cin >> x;
    std::pair<int, int> ans = lab1::Solution::closest_pair_tonum(x);
    std::cout << ans.first << ' ' << ans.second << std::endl;

    ::testing::InitGoogleTest();

    return RUN_ALL_TESTS();
}