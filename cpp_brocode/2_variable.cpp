#include <iostream>

// int main(){

//     int x; //declaration
//     x = 5; //assignment

//     int y = 6;
//     int sum = x + y;

//     std::cout << x << std::endl;
//     std::cout << x + y << std::endl;    

//     return 0;

// }

int main(){

    int age = 27;
    int year = 2024;
    int days = 7.5; //Truncated if use int -> 7
    
    double price = 999.99;
    double pig_price = 666.66;
    double temperature = 28.5;

    //std::cout << pig_price;

    // Single character
    char grade = 'A';
    //char initial = 'DX'; //warning! truncated to X
    char ccy = '$';

    //std::cout << ccy;

    // Boolean(true or false)

    bool isPig = true;
    bool notPig = false;

    // string (objects that presents a sequence of text) 
    std::string name = "Pig"; // Double quotes
    
    std::cout << "Hello " << name << "!\n";
    std::cout << "You are " << age << " years old!";

    return 0;
}