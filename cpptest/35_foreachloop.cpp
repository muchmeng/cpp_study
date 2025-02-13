#include <iostream>

int main(){
    // foreach loop = loop that eases the traversal over an iterable data set
    
    std::string students[] = {"Pig", "Duo", "Zhu", "Mao"};
    for (std::string student : students){ // type ele : array
        std::cout << student << "\n";
    }

    int grades[] = {100, 98, 99, 95};
    for (int grade : grades){
        std::cout << grade << "\n";
    }

    return 0;
}