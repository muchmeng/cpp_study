#include <iostream>

int main(){
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    // if(name.length() > 12){
    //     std::cout << "Your name can't be over 12 characters! ";
    // }
    // else{
    //     std::cout << "Welcome " << name;
    // }
    
    // if(name.empty()){
    //     std::cout << "You didn't enter your name!";
    // }
    // else{
    //     std::cout << "Hello " << name;
    // }

    // name.clear(); //clean the string
    // std::cout << "Hello " << name;

    // name.append("@gmail.com");
    // std::cout << "Your username is now " << name;
    
    // std::cout << name.at(0); // the first character of the name

    // name.insert(0, "@");
    // std::cout << name;

    // std::cout << name.find(' ');

    name.erase(0,3); //remove the first 3 chars
    std::cout << name;

    return 0;
}