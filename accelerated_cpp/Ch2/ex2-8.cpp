#include <iostream>

int main(){
    int product = 1;
    for (int i = 1; i < 10; ++i){
        product *= i;
    }
    std::cout << "The product is: " << product;

    return 0;
}