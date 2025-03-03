#include <iostream>

int main(){
    int num = 10;

    while (num > -6){
        std::cout << num << std::endl;
        --num;
    }

    for(int i = 10; i > -6; --i){
        std::cout << i << std::endl;
    }
    return 0;
}