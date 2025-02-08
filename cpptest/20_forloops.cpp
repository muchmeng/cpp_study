#include <iostream>

int main(){
    // for(int i = 0; i <= 10; i+=3){ //start; end condition; incremental
    for(int i = 10; i >= 0; i-=2){ //start; end condition; incremental

        std::cout << i << '\n';
    }
    std::cout << "Happy New Year!\n";
}