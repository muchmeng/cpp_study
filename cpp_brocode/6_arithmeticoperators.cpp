#include <iostream>

int main(){
    // arithmetic operators = return the results of a specific arithmetic operation (+-*/)
    int students = 20;
    students += 1;

    students++; //equivalent to students += 1;

    students -= 1;
    students--;

    students *= 2;
    students /= 3; // remainer will be lost

    int remainder = students % 3; //modular operator

    std::cout<<students<<'\n';
    std::cout<<remainder;


    return 0; 
}