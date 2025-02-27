#include <iostream>

class Pizza{
    public:
        std::string topping1;
        std::string topping2;

    Pizza(){//no param        
    }

    Pizza(std::string topping1){ //one param
        this->topping1 = topping1;
    }
    Pizza(std::string topping1, std::string topping2){ // two params
        this->topping1 = topping1;
        this->topping2 = topping2;
    }
};

int main(){
    // overload contructors = multiple constructors with same name but different parameters
    // allows for varying arguments when instantiating an object

    Pizza pizza1("pepperoni");
    Pizza pizza2("pepperoni", "mushroods");
    Pizza pizza3;

    //std::cout << pizza1.topping1 << "\n";

    std::cout << pizza2.topping1 << "\n";
    std::cout << pizza2.topping2 << "\n";


    return 0;
}