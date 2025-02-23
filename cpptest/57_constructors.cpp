#include <iostream>

// Example1
// class Student{
//     public:
//         std::string name;
//         int age;
//         double gpa;
//     Student(std::string name, int age, double gpa){ //set attributes when initializing the instance
//         this->name = name;
//         this->age = age;
//         this->gpa = gpa;
//     }

//     // Student(std::string x, int y, double z){ //if attributes name are different from the params name
//     //     name = x;
//     //     age = y;
//     //     gpa = z;
//     // }

// };

// int main(){
//     // constructor = special method that is automatically called when an object is instantiated
//     // useful for assigning values to attributes as arguments
//     Student student1("Duo", 18, 4.0);
//     Student student2("Lee", 18, 3.0);
//     Student student3("Meow", 18, 2.5);

//     std::cout << student1.name << "\n";
//     std::cout << student1.age << "\n";
//     std::cout << student1.gpa << "\n";    

//     std::cout << student2.name << "\n";
//     std::cout << student2.age << "\n";
//     std::cout << student2.gpa << "\n";   

//     std::cout << student3.name << "\n";
//     std::cout << student3.age << "\n";
//     std::cout << student3.gpa << "\n";   

//     return 0;
// }

//Example2
class Car{
    public:
        std::string make;
        std::string model;
        int year;
        std::string color;
    Car(std::string make, std::string model, int year, std::string color){
        this->make = make;
        this->model = model;
        this->year = year;
        this->color = color;
    }
};

int main(){
    Car car1("Chevy", "Corvette", 2025, "Blue");
    Car car2("Ford", "Mustang", 2024, "Red");

    std::cout << car1.make << "\n";
    std::cout << car1.model << "\n";
    std::cout << car1.year << "\n";
    std::cout << car1.color << "\n";

    std::cout << car2.make << "\n";
    std::cout << car2.model << "\n";
    std::cout << car2.year << "\n";
    std::cout << car2.color << "\n";
    return 0;
}
