#include <iostream>

struct student{
    std::string name;
    double gpa;
    bool enrolled = true; //can set a default value
};

int main(){
    // struct = A structure that group related variables under one name
    // structs can contain many different data types (string, int, double, bool...)
    // variables in a struct are known as "members"
    // members can be accessed with . "Class Member Access Operator"

    student student1;
    student1.name = "Spongebob";
    student1.gpa = 3.2;
    student1.enrolled = true;

    std::cout << student1.name << "\n";
    std::cout << student1.gpa << "\n";
    std::cout << student1.enrolled << "\n"; // print as 1

    student student2;
    student2.name = "Patrick";
    student2.gpa = 3.1;
    //student2.enrolled = true;

    std::cout << student2.name << "\n";
    std::cout << student2.gpa << "\n";
    std::cout << student2.enrolled << "\n";

    student student3;
    student3.name = "Squidward";
    student3.gpa = 1.5;
    student3.enrolled = false;

    std::cout << student3.name << "\n";
    std::cout << student3.gpa << "\n";
    std::cout << student3.enrolled << "\n";
}