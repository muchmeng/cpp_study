#include <iostream>
#include <iomanip>

int len(int num){
    int length = 0;
    while (num > 0){
        num /= 10;
        length++;
    }
    return length;
}

int main(){
    int end_value = 100;
    for (int i = 1; i < end_value + 1; i++){
        int val_w = len(end_value) + 1;
        int squ_w = len(end_value * end_value) +1;
        std::cout << std::setw(val_w) << i << std::setw(squ_w) << i * i << "\n"; //setw from iomanip
    }
    return 0;
}
