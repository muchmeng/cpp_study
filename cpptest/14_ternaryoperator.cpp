#include <iostream>

int main(){
    // ternary operator ?: = replacement to an if/else statement
    // condition ? expression1 : expression2;

    int grade = 75;

    grade >= 60 ? std::cout << "You pass!" : std::cout << "You fail!";
    
    int number = 8;

    number % 2 == 1 ? std::cout << "Odd" : std::cout << "Even";

    bool hungry = true;

    hungry ? std::cout << "You are hungry" : std::cout << "You are full";

    std::cout << (hungry ? "You are hungry" : "You are full"); //Alternative way to write the statement

    return 0;
}