#include <iostream>

void bakePizza();
void bakePizza(std::string topping1);
void bakePizza(std::string topping1, std::string topping2);

int main(){
    bakePizza();
    bakePizza("Pepperoni");
    bakePizza("Pepperoni", "Mushrooms");
    return 0;
}

void bakePizza(){
    std::cout << "Here is your pizza!\n";
}

void bakePizza(std::string topping1){ 
    //function can share same name, but with different set of parameters; name + parameters = signiture, signiture must be different
    std::cout << "Here is your "<< topping1 <<" pizza!\n";
}

void bakePizza(std::string topping1, std::string topping2){
    std::cout << "Here is your "<< topping1 << "and" << topping2 <<" pizza!\n";
}