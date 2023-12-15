#include "../include/Allocator.hpp"
#include <map>
#include <iostream>
#include "../include/Array.hpp"

int main(){

    std::map<int, int, std::less<int>, Allocator<std::pair<const int, int>>> mp;
    int fact = 1;
    for(size_t i = 0; i < 10; ++i){
        fact *= i > 1 ? i : 1;
        mp[i] = fact;
    }

    for(std::pair<int, int> pr : mp){
        std::cout << pr.first << ' ' << pr.second << std::endl;
    }

    Array<int, Allocator<int>> arr;
    for(size_t i = 0; i < 2048; ++i){
        arr.push_back(i);
    }

    for(size_t i = 0; i < 2048; ++i){
        if(i != arr[i]) std::cout << "problems" << std::endl;
    }

    return 0;
}