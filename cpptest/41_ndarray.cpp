#include <iostream>

int main(){

    //std::string cars[3][4]; //three rows, 4 columns
    std::string cars[][3] = {{"BMW", "Benz", "Ford"}, //must at least initiate with column size
                            {"Mustang", "Escape", "F-150"},
                            {"Challenger", "Durango", "Ram 1500"}};
    //std::cout << cars[0][0] << "\n"; //output row 0, col 0 value

    int rows = sizeof(cars)/sizeof(cars[0]);
    int cols = sizeof(cars[0])/sizeof(cars[0][0]);

    for (int i = 0; i < rows; i++){
        //std::cout << cars[i] << "\n"; //return address of the row
        for (int j = 0; j < cols; j ++){
            std::cout << cars[i][j] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}