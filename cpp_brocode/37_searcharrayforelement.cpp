#include <iostream>

// Search in int array
// int searchArray(int array[], int size, int element);

// int main(){
//     int numbers[] = {1,2,3,4,5,6,7,8,9,10};
//     int size = sizeof(numbers)/sizeof(numbers[0]);
//     int index;
//     int myNum;

//     std::cout << "Enter element to search for: \n";
//     std::cin >> myNum;

//     index = searchArray(numbers, size, myNum);

//     if (index != -1){
//         std::cout << myNum << " is at index " << index;
//     }
//     else{
//         std::cout << myNum << " is not in the array!";
//     }

//     return 0;
// }

// int searchArray(int array[], int size, int element){
//     for (int i =0; i < size; i++){
//         if (array[i] == element){
//             return i;
//         }
//     }
//     return -1;
// }

// Search in string array
int searchArray(std::string array[], int size, std::string element);

int main(){
    std::string foods[] = {"pizza", "hotdog", "burger"};
    int size = sizeof(foods)/sizeof(foods[0]);
    int index;
    std::string myFood;

    std::cout << "Enter element to search for: \n";
    std::getline(std::cin, myFood); //handle input with blankspace

    index = searchArray(foods, size, myFood);

    if (index != -1){
        std::cout << myFood<< " is at index " << index;
    }
    else{
        std::cout << myFood << " is not in the array!";
    }

    return 0;
}

int searchArray(std::string array[], int size, std::string element){
    for (int i =0; i < size; i++){
        if (array[i] == element){
            return i;
        }
    }
    return -1;
}