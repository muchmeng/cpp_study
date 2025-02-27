#include <iostream>

//Example 1

// double square(double length);
// double cube(double length);

// int main(){
//     // return = return a value back to the spot where you called the encompassing function

//     double length = 5.0;
//     double area = square(length);
//     double volume = cube(length);

//     std::cout << "Area: " << area << " cm^2.\n";
//     std::cout << "Volume: " << volume << " cm^3.\n";

//     return 0;
// }

// double square(double length){
//     return length * length; //return is a double, so declare double for the function
// }

// double cube(double length){
//     return length * length * length;
// }

//Example 2

std::string concatString(std::string string1, std::string string2);

int main(){
    std::string firstName = "Duo";
    std::string lastName = "Xu";

    std::string fullName = concatString(firstName, lastName);
    std::cout << "Hello " << fullName << "!";

    return 0;

}

std::string concatString(std::string string1, std::string string2){
    return string1 + " " + string2; //remember the function type changed to std::string
}