#include <iostream>

int main(){
    // sizeof() = determines the size in bytes of a variable, data type, class, objects, etc.
    std::string name = "Duo";
    double gpa = 2.5;
    char grade = 'A';
    bool student = true;
    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    std::string students[] = {"Zhu", "Duo", "LLX", "zhuzhu"};

    std::cout << sizeof(gpa) << " bytes \n";
    // std::cout << sizeof(double) << " bytes \n";
    std::cout << sizeof(name) << " bytes \n";
    std::cout << sizeof(grade) << " bytes \n";
    std::cout << sizeof(student) << " bytes \n";
    std::cout << sizeof(grades) << " bytes \n";

    std::cout << sizeof(grades)/sizeof(grades[0]) << " elements \n"; // calculate num of elements
    std::cout << sizeof(students)/sizeof(students[0]) << " elements \n"; // calculate num of elements


    return 0;
}