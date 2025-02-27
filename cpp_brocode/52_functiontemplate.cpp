#include <iostream>

// int max(int x, int y){
//     return (x > y) ? x : y;
// }

// double max(double x, double y){
//     return (x > y) ? x : y;
// }

// char max(char x, char y){
//     return (x > y) ? x : y;
// }

template <typename T, typename U>

// T max(T x, T y){ //only accept the same data types of x and y
//     return (x > y) ? x : y;
// }

auto max(T x, U y){ // T, U type can be different, the return will be auto
    return (x > y) ? x : y;
}

int main(){
    // function template = describes what a function looks like
    // Can be used to generate as many overloaded function as needed, each using different data types
    std::cout << max(1, 2) << '\n';
    std::cout << max(1.2, 2.1) << '\n';
    std::cout << max('a', 'b') << '\n';
    std::cout << max(1, 1.2) << '\n';

    return 0;
}