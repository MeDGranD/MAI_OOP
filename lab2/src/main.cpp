#include "../include/Thirdteen.hpp"

int main(){

    lab2::Thirdteen temp1("000");
    lab2::Thirdteen temp2("000");
    lab2::Thirdteen temp3("000");

    //std::cout << temp1 - temp2 + temp3 << std::endl;
    //std::cout << temp1 - temp2 - temp3 << std::endl;

    std::cout << "Enter a 13th number:" << std::endl;
    std::string str;
    getline(std::cin, str);
    lab2::Thirdteen num(str);

    std::cout << "Your number is : " << num << std::endl;

    std::cout << "Enter second number" << std::endl;

    getline(std::cin, str);
    lab2::Thirdteen num2(str);
    
    std::cout << num << '+' << num2 << '=' << num + num2 << std::endl;
    if(num > num2){
        std::cout << num << '-' << num2 << '=' << num - num2 << std::endl;
    }
    else{
        std::cout << num2 << '-' << num << '=' << num2 - num << std::endl;
    }

    return 0;
}