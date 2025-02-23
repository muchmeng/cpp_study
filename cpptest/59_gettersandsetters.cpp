#include <iostream>

class Stove{
    private: // private can't be accessed
        int temperature = 0;
    public:
        Stove(int temperature){ //constructor, 
            //this->temperature = temperature; // or just accept the params for initialization
            setTemperature(temperature); // invoke the setTemperature
        }
        int getTemperature(){ // getter
            return temperature;
        }
        void setTemperature(int temperature){ //setter
            if(temperature < 0){
                this->temperature = 0;
            }
            else if(temperature > 10){
                this->temperature = 10;
            }
            else{
                this->temperature = temperature;
            }    
        }
};

int main(){
    // Abstraction =  hiding unnecessary data fom outside a class
    // getter = function that makes a private attribute READABLE
    // setter = function that makes a private attribute WRITABLE

    Stove stove(5);
    std::cout << "The temperature setting is: " << stove.getTemperature() << "\n";
    
    stove.setTemperature(1000000);
    std::cout << "The temperature setting is: " << stove.getTemperature() << "\n";
    
    return 0;
}