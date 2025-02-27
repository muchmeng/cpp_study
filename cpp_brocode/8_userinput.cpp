#include <iostream>

// cout << (insertion operator)
// cin >> (extraction operator)

int main(){
    std::string name;
    std::string fullname;

    int age;
    std::cout << "What's your first name?: "; 
    std::cin >> name; // This one will introduce a \n at the end implicitly, if a getline after use std::ws

    std::cout << "What's your full name?: "; 
    std::getline(std::cin >> std::ws, fullname); // blank space can be stored correctly, use getline; std::ws remove white spaces and \n

    std::cout << "What's your age?: ";
    std::cin >> age;

    std::cout << "Hello " << name <<'\n';
    std::cout << "Hello " << fullname <<'\n';
    std::cout << "You are " << age << " years old.";
    return 0;
}