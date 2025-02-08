# include <iostream>

void happyBirthday(std::string name, int age); // declare void first and define later, it works; or put main() after the definition of the func

int main(){
    // function = a block of reusable code
    std::string name = "Duo";
    int age = 18;
    happyBirthday(name, age);
    return 0;
}

void happyBirthday(std::string name, int age){ // data type must be define in the arguments
    std::cout << "Happy birthday to " << name <<"!\n";
    std::cout << "Happy birthday to " << name <<"!\n";
    std::cout << "Happy birthday to " << name <<"!\n";
}