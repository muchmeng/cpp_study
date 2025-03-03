#include <iostream>

int main(){
    int num1;
    int num2;

    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;   

    if (num1 == num2){
        std::cout << "Num1 = Num2";
    }
    else if (num1 > num2){
        std::cout << "Num1 > Num2";
    }
    else{
        std::cout << "Num1 < Num2";
    }

}