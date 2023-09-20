#include "../include/Solution.hpp"

namespace lab1{

    std::pair<int, int> Solution::closest_pair_tonum(int upper_limit){

        for (size_t i = upper_limit - 1; i > 0; --i) {
        for (size_t j = i - 1; j > 0; --j) {
            double sqrt1 = sqrt(i + j);
            double sqrt2 = sqrt(i - j);

            if (sqrt1 == static_cast<int>(sqrt1) && sqrt2 == static_cast<int>(sqrt2)) return std::pair<int, int>(i, j);
            }
        }
        return std::pair<int, int>(0, 0);

    }

    double Solution::abs(double x){
        return x >= 0 ? x : -x;
    }

    double Solution::sqrt(int x){
        const double eps = 1e-15;

        double squareRoot = x;
        double temp = 0;

        while (abs(squareRoot - temp) > eps) {
            temp = squareRoot;
            squareRoot = (temp + x / temp) / 2;
        }

        return squareRoot;
    }

}