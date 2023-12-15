#pragma once
#include <gtest/gtest.h>
#include "../../include/Iterator.hpp"

TEST(Iterator, defaultConstructor){
    ASSERT_NO_THROW({
        Iterator<int>();
    });
}

TEST(Iterator, pointerConstructor){
    ASSERT_NO_THROW({
        int temp = 0;
        Iterator<int> it(&temp);
    });
}

TEST(Iterator, nullptrConstructor){
    ASSERT_NO_THROW({
        Iterator<int> it(nullptr);
    });
}

TEST(Iterator, copyConstructor){
    ASSERT_NO_THROW({
        Iterator<int> it(nullptr);
        Iterator<int> it2(it);
    });
}


TEST(Iterator, operatorPlus){
    int arr[2];
    arr[0] = 0; arr[1] = 1;
    Iterator<int> it(arr);
    ++it;
    ASSERT_TRUE(*it == arr[1]);
}

TEST(Iterator, bigSizedOperatorPlus){
    int arr[10000];
    arr[9999] = 9999;
    Iterator<int> it(arr);
    for(size_t i = 0; i < 9999; ++i) ++it;
    ASSERT_TRUE(*it == arr[9999]);
}

TEST(Iterator, plusOperator){
    int arr[2];
    arr[0] = 0; arr[1] = 1;
    Iterator<int> it(arr);
    it++;
    ASSERT_TRUE(*it == arr[1]);
}

TEST(Iterator, operatorMinus){
    int arr[2];
    arr[0] = 0; arr[1] = 1;
    Iterator<int> it(arr+1);
    --it;
    ASSERT_TRUE(*it == arr[0]);
}

TEST(Iterator, bigSizedOperatorMinus){
    int arr[10000];
    arr[0] = 9999;
    Iterator<int> it(arr+9999);
    for(size_t i = 0; i < 9999; ++i) --it;
    ASSERT_TRUE(*it == arr[0]);
}

TEST(Iterator, minusOperator){
    int arr[2];
    arr[0] = 0; arr[1] = 1;
    Iterator<int> it(arr+1);
    it--;
    ASSERT_TRUE(*it == arr[0]);
}

TEST(Iterator, operatorAt){
    int arr[15];
    arr[5] = 14;
    Iterator<int> it(arr);
    for(size_t i = 0; i < 5; ++i) ++it;
    ASSERT_TRUE(*it == 14);
}