#pragma once
#include <gtest/gtest.h>
#include "../../include/Figures/Rhombus.hpp"
#define EPS 1e-7

TEST(Rhombus, moveOperator){
    ASSERT_NO_THROW({
        Rhombus romb({
            point(0, 0),
            point(0, 2),
            point(2, 2),
            point(2, 0)
        });
        romb = Rhombus();
        ASSERT_TRUE(romb == Rhombus());
    });
}

TEST(Rhombus, copyOperator){
    ASSERT_NO_THROW({
        Rhombus romb2({
            point(0, 0),
            point(0, 2),
            point(2, 2),
            point(2, 0)
        });
        Rhombus romb = romb2;
        ASSERT_TRUE(romb == romb2);
    });
}

TEST(Rhombus, simpleCenter){
    ASSERT_TRUE(Rhombus().center() == point(0.5f, 0.5f));
}

TEST(Rhombus, difCenter){
    Rhombus romb({
        point(2, 0),
        point(2, 2),
        point(4, 2),
        point(4, 0)
    });
    ASSERT_TRUE(romb.center() == point(3, 1));
}

TEST(Rhombus, difCenter2){
    Rhombus romb({
        point(0, 0),
        point(3, 1),
        point(6, 0),
        point(3, -1)
    });
    ASSERT_TRUE(romb.center() == point(3, 0));
}

TEST(Rhombus, simpleArea){
    ASSERT_TRUE(fabs((double)Rhombus() - 1) <= EPS);
}

TEST(Rhombus, difArea){
    Rhombus romb({
        point(2, 0),
        point(2, 2),
        point(4, 2),
        point(4, 0)
    });
    ASSERT_TRUE(fabs(static_cast<double>(romb) - 4) <= EPS);
}

TEST(Rhombus, difArea2){
    Rhombus romb({
        point(0, 0),
        point(3, 1),
        point(6, 0),
        point(3, -1)
    });
    ASSERT_TRUE(fabs(static_cast<double>(romb) - 6) <= EPS);
}