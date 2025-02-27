#include <iostream>
//Example 1
// void printNum();

// int main(){
//     // local var = declared inside a function or block {}
//     // global var = decalred outside of all functions

//     int myNum = 1;

//     printNum();

//     return 0;
// }

// void printNum(){
//     int myNum = 2; //different from scope inside of main
//     std::cout << myNum;
// }

//Example 2
// int myNum = 3; // global declaration

// void printNum();

// int main(){

//     printNum();
//     std::cout << myNum << "\n";
//     return 0;
// }

// void printNum(){
//     std::cout << myNum << "\n";
// }

//Example 3
int myNum = 3; // global declaration, better avoid using global variable

void printNum();

int main(){
    int myNum = 1;
    printNum();
    std::cout << ::myNum << "\n"; // :: scope resolution operator, will use global variable
    return 0;
}

void printNum(){
    int myNum = 2;
    std::cout << ::myNum << "\n";
}