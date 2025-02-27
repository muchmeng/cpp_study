#include <iostream>

int main(){

    std::string students[] = {"Pig", "Duo", "Zhu", "Mao"};

    for (int i = 0; i < sizeof(students)/sizeof(std::string); i++){ //loop every element in the array
        std::cout << students[i] << "\n";
    }

    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    for (int i = 0; i < sizeof(grades)/sizeof(char); i++){ //loop every element in the array
        std::cout << grades[i] << "\n";
    }
    
    return 0;
}