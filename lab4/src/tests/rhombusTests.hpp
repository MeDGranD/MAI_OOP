#pragma once
#include <gtest/gtest.h>
#include "../../include/Figures/Rhombus.hpp"
#define EPS 1e-7

TEST(Rhombus, moveOperator){
    ASSERT_NO_THROW({
        Rhombus<double> romb({
            point<double>(0, 0),
            point<double>(0, 2),
            point<double>(2, 2),
            point<double>(2, 0)
        });
        romb = Rhombus<double>();
        ASSERT_TRUE(romb == Rhombus<double>());
    });
}

TEST(Rhombus, copyOperator){
    ASSERT_NO_THROW({
        Rhombus<double> romb2({
            point<double>(0, 0),
            point<double>(0, 2),
            point<double>(2, 2),
            point<double>(2, 0)
        });
        Rhombus<double> romb = romb2;
        ASSERT_TRUE(romb == romb2);
    });
}

TEST(Rhombus, simpleCenter){
    ASSERT_TRUE(Rhombus<double>().center() == point<double>(0.5f, 0.5f));
}

TEST(Rhombus, difCenter){
    Rhombus<double> romb({
        point<double>(2, 0),
        point<double>(2, 2),
        point<double>(4, 2),
        point<double>(4, 0)
    });
    ASSERT_TRUE(romb.center() == point<double>(3, 1));
}

TEST(Rhombus, difCenter2){
    Rhombus<double> romb({
        point<double>(0, 0),
        point<double>(3, 1),
        point<double>(6, 0),
        point<double>(3, -1)
    });
    ASSERT_TRUE(romb.center() == point<double>(3, 0));
}

TEST(Rhombus, simpleArea){
    ASSERT_TRUE(fabs((double)Rhombus<double>() - 1) <= EPS);
}

TEST(Rhombus, difArea){
    Rhombus<double> romb({
        point<double>(2, 0),
        point<double>(2, 2),
        point<double>(4, 2),
        point<double>(4, 0)
    });
    ASSERT_TRUE(fabs(static_cast<double>(romb) - 4) <= EPS);
}

TEST(Rhombus, difArea2){
    Rhombus<double> romb({
        point<double>(0, 0),
        point<double>(3, 1),
        point<double>(6, 0),
        point<double>(3, -1)
    });
    ASSERT_TRUE(fabs(static_cast<double>(romb) - 6) <= EPS);
}