#include <iostream>
#include <iomanip>

int main(){
    int end_value = 100;
    for (int i = 1; i < end_value + 1; i++){
        std::cout << std::setw(3) << i << std::setw(6) << i * i << "\n"; //setw from iomanip
    }
    return 0;
}