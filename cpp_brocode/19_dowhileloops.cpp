#include <iostream>

int main(){
    // do while loop = do some block of code first,
    // Then repeat again if condition is true
    
    int number;

    do{
        std::cout << "Enter a position number: ";
        std::cin >> number;
    } while(number < 0); // do first and repeat until true condition

    std::cout << "The number is "<< number;

    return 0;
}