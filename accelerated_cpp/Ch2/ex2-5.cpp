#include <iostream>
#include <string>

void square(int side);
void rectangle(int side1, int side2);
void triangle(int rows);

void square(int side){
    for (int i = 0; i < side; i++){
        std::string row(side, '*');
        std::cout << row << "\n";
    }
}

void rectangle(int side1, int side2){
    for (int i = 0; i < side1; i++){
        std::string row(side2, '*');
        std::cout << row << "\n";
    }
}

void triangle(int rows){
    int maxRow = rows * 2 - 1;
    for (int i = 0; i < rows; i++){
        int num = (i + 1) * 2 - 1;
        std::string row(num, '*');

        int halfBlankSpace = (maxRow - num)/2;
        if (halfBlankSpace > 0){
            std::string blankspaces(halfBlankSpace, ' ');
            std::cout << blankspaces +  row + blankspaces << "\n";
        }
        else{
            std::cout << row << "\n";
        }

    }

}

int main(){
    std::cout << "Square:" << "\n";
    square(3);
    std::cout << "Rectangle:" << "\n";
    rectangle(3, 5);
    std::cout << "Triangle:" << "\n";
    triangle(20);
    return 0;
}