#include <iostream>

//Example 1
// class Human{
//     public: //pulic attribution
//         std::string name = "Pig"; // Can set default value
//         std::string occupation = "Piggy";
//         int age = 0;

//         void eat(){
//             std::cout << "This person is eating\n";
//         }
//         void drink(){
//             std::cout << "This person is drinking\n";
//         }
//         void sleep(){
//             std::cout << "This person is sleeping\n";
//         }
// };


// int main(){
//     // object = A collection of attributes and methods
//     // They can have characteristics and could perform actions
//     // Can be used to mimic real world items (e.g. Phone, Book)
//     // Created from a class which acts as a "blue-print"
//     Human human1;
//     Human human2;

//     human1.name = "Duo";
//     human1.occupation = "Teacher";
//     human1.age = 18;

//     //human2.name = "Lee";
//     //human2.occupation = "Student";
//     human2.age = 18;

//     std::cout << human1.name << "\n";
//     std::cout << human1.occupation << "\n";
//     std::cout << human1.age << "\n";

//     human1.eat();
//     human1.drink();
//     human1.sleep();

//     std::cout << human2.name << "\n";
//     std::cout << human2.occupation << "\n";
//     std::cout << human2.age << "\n";

//     human2.eat();
//     human2.drink();
//     human2.sleep();   

//     return 0;
// }

//Example2

class Car{
    public:
        std::string make;
        std::string model;
        int year;
        std::string color;
        
        void accelerate(){
            std::cout << "You step on the gas!\n";
        }
        void brake(){
            std::cout << "You step on the brake!\n";
        }

};

int main(){
    Car car1;
    
    car1.make = "Ford";
    car1.model = "Mustang";
    car1.year = 2025;
    car1.color = "Silver";

    std::cout << car1.make << "\n";
    std::cout << car1.model << "\n";
    std::cout << car1.year << "\n";
    std::cout << car1.color << "\n";

    car1.accelerate();
    car1.brake();

    return 0;
}
