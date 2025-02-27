#include <iostream>

int main(){
    const double PI = 3.1415926; //Upper case of the variable value
    //PI = 4; //Can't be done
    const int LIGHT_SPEED = 3800000;
    const int WIDTH = 1920;
    const int HEIGHT = 1080;
    double radius = 10;
    double circumference = 2 * PI * radius;
    std::cout << circumference <<"cm";
    return 0;
}