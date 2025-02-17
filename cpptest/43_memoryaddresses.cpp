#include <iostream>

int main(){
    // memory address = a location in memory where data is stored
    // a memory address can accessed with & (address-of operator)

    std::string name = "Duo";
    int age = 18;
    bool student = true;

    std::cout << &name << "\n"; //return name's address
    std::cout << &age << "\n";
    std::cout << &student << "\n";
    
    return 0;
}