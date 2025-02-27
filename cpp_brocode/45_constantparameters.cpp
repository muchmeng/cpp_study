#include <iostream>
void printInfo(const std::string &name, const int &age);

int main(){
    //cont parameter = parameter that is effectively read-only; code is more secure & conveys intent; useful for references and pointers
    std::string name = "Duo";
    int age = 18;

    printInfo(name, age);

    return 0;
}

void printInfo(const std::string &name, const int &age){ //const will prevent changing the var value, especially when input memory address
    // name = " "; //if const is specified, then the reassign value will intrigger error
    // age = 0;
    std::cout << name << "\n";
    std::cout << age << "\n";

}