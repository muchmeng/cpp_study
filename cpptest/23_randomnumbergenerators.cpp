#include <iostream>
#include <ctime>

int main(){
    // pseudo-random = not truly random (but close)
    srand(time(NULL));

    int num1 = rand() % 6 + 1; //roll three dices
    int num2 = rand() % 6 + 1; // rand() will generate int number [0, RaAND_MAX]
    int num3 = rand() % 6 + 1;

    std::cout << num1 << '\n';
    std::cout << num2 << '\n';
    std::cout << num3 << '\n';

    return 0;
}