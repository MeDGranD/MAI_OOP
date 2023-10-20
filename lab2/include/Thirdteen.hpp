#pragma once
#include <iostream>
#include <string>
namespace lab2{

    class Thirdteen{
    friend std::ostream& operator<<(std::ostream&, const Thirdteen&);
    public:
        Thirdteen();
        Thirdteen(size_t, const unsigned char = '0');
        Thirdteen(const std::initializer_list<unsigned char>&);
        Thirdteen(const std::string&);
        Thirdteen(const Thirdteen&);
        Thirdteen(Thirdteen&&) noexcept;

        Thirdteen operator+(const Thirdteen&) const;
        Thirdteen operator-(const Thirdteen&) const;
        Thirdteen operator=(const Thirdteen&);
        Thirdteen& operator+=(const Thirdteen&);
        Thirdteen& operator-=(const Thirdteen&);

        bool operator==(const Thirdteen&) const noexcept;
        bool operator!=(const Thirdteen&) const noexcept;
        bool operator>(const Thirdteen&) const noexcept;
        bool operator<(const Thirdteen&) const noexcept;
        bool operator>=(const Thirdteen&) const noexcept;
        bool operator<=(const Thirdteen&) const noexcept;

        virtual ~Thirdteen() noexcept;

    private:
        void increase_size();
        void reduce_size();

        unsigned char* array;
        size_t sz;
    };

}