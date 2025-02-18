#include <iostream>
void swap(std::string &x, std::string &y);

int main(){
    std::string x = "Kool-Aid";
    std::string y = "Water";
    // std::string temp;

    swap(x, y); // if input two copies of x and y, can't change the variable value; pass memory address, then can swap the values
    // temp = x;
    // x = y;
    // y = temp;

    std::cout << "X: " << x << "\n";
    std::cout << "Y: " << y << "\n";


    return 0;
}

void swap(std::string &x, std::string &y){
    std::string temp;
    temp = x;
    x = y;
    y = temp;
}