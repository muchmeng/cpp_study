#include <iostream>
//Example1
// class Animal{
//     public:
//         bool alive = true;
        
//         void eat(){
//             std::cout << "Nom Nom Nom\n";
//         }
// };

// class Dog : public Animal{ // inherite from Animal
//     public:
//         void bark(){
//             std::cout << "The dog goes woof!\n";
//         }

// };

// class Cat : public Animal{
//     public:
//         void meow(){
//             std::cout << "The cat goes meow!";
//         }
// };

// int main(){
//     // inheritance = A class can receive attributes and methods from another class
//     // Children classes inherit from a Parent class
//     // Helps to reuse similar code found within multiple classes


//     Dog dog;
//     Cat cat;

//     std::cout << dog.alive << "\n";
//     dog.eat();
//     dog.bark();

//     std::cout << cat.alive << "\n";
//     cat.eat();
//     cat.meow();


//     return 0;
// }

//Example2
class Shape{
    public:
        double area;
        double volume;
};

class Cube : public Shape{
    public:
        double side;
        Cube(double side){
            this->side = side;
            this->area = 6 * side * side;
            this->volume = side * side * side;
        }
};

class Sphere : public Shape{
    public:
        double radius;
        Sphere(double radius){
            this->radius = radius; 
            this->area = 4 * 3.14159 * radius * radius;
            this->volume = 4 / 3.0 * 3.14159 * radius * radius * radius; //must use 3.0 as the denominator, otherwise 4/3 will be saved as int
        }
};



int main(){
    
    Cube cube(10);
    Sphere sphere(5);


    std::cout << "Area: " << cube.area << " cm^2\n";
    std::cout << "Volume: " << cube.volume << " cm^3\n";

    std::cout << "Area: " << sphere.area << " cm^2\n";
    std::cout << "Volume: " << sphere.volume << " cm^3\n";  
    return 0;
};