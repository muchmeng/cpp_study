#include <iostream>

struct Car{
    std::string model;
    int year;
    std::string color;
};

// void printCar(Car car);

// int main(){
//     Car car1;
//     Car car2;

//     car1.model = "BMW";
//     car1.year = 2025;
//     car1.color = "White";

//     car2.model = "Benz";
//     car2.year = 2024;
//     car2.color = "Grey";

//     std::cout << &car1 << '\n';
//     printCar(car1);//when passing by struct, a copy will be created, not the original

//     return 0;
// }

// void printCar(Car car){
//     std::cout << &car << "\n";
//     std::cout << car.model << "\n";
//     std::cout << car.year << "\n";
//     std::cout << car.color << "\n";
// }

void printCar(Car &car);
void paintCar(Car &car, std::string color);

int main(){
    Car car1;
    Car car2;

    car1.model = "BMW";
    car1.year = 2025;
    car1.color = "White";

    car2.model = "Benz";
    car2.year = 2024;
    car2.color = "Grey";

    std::cout << &car1 << '\n';
    printCar(car1);
    printCar(car2);

    paintCar(car1, "Pink");
    printCar(car1);

    return 0;
}

void printCar(Car &car){ // passing in the original
    std::cout << &car << "\n";
    std::cout << car.model << "\n";
    std::cout << car.year << "\n";
    std::cout << car.color << "\n";
}

void paintCar(Car &car, std::string color){ // address is input, the color can be changed
    car.color = color;
}