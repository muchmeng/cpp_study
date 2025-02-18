#include <iostream>

int main(){
    // pointers = variable that stores a memory address of another variable; sometiems it's easier to work with an address
    // & address-of operator
    // * dereference operator

    std::string name = "Duo";
    std::string *pName = &name; //same data type as the name
    std::cout << *pName << "\n"; //accessing the value that stored in the address

    int age = 18;
    int *pAge = &age;
    std::cout << *pAge << "\n";

    std::string freePizzas[5] = {"Pizza1","Pizza2","Pizza3","Pizza4","Pizza5"};
    std::string *pFreePizzas = freePizzas;//array is alreay an address, no need to use the operator
    std::cout << *pFreePizzas << "\n"; //give the first element of the array

    return 0;
}