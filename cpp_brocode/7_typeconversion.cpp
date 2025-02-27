#include <iostream>

int main(){
    //Type conversion = conversion a value of one data type to another
    //Implicit = Automatic
    //Explicit = Precede Value with new data type (int) x


    double x = (int) 3.14; //convert 3.14 into int
    std::cout << x <<std::endl;
    
    char s = 100;
    std::cout << (char) s <<std::endl; // convert to the character of d (asc table)

    int correct = 8;
    int questions = 10;
    //double score = correct / questions * 100; // integer division will truncate the int part, which is 0
    double score = correct / double(questions) * 100; //explicitly to retain the digits
    
    std::cout << score <<"%";

    return 0;
}
