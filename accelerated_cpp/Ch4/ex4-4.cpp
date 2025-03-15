#include <iostream>
#include <iomanip>


int len(double num, const std::streamsize& decimal_size){
    int length = 1;
    while (num > 1.0){
        num /= 10;
        length++;
    }
    return length + decimal_size + 1; // 1 is the dot
}

int main(){
    double end_value = 100.0;
    const std::streamsize decimal_size = 2;


    for (double i = 1.0; i < end_value + 1; i++){
        int val_w = len(end_value, decimal_size) + 1;
        int squ_w = len(end_value * end_value, decimal_size) +1;

        std::streamsize prec = std::cout.precision();
        std::cout << std::fixed << std::setprecision(decimal_size) << std::setw(val_w) << i << std::setw(squ_w) << i * i << std::setprecision(prec)<< "\n";
        //std::fixed Sets the floatfield of the stream str to fixed as if by calling
    }
    return 0;
}
