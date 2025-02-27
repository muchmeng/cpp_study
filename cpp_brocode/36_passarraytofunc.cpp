#include <iostream>

double getTotal(double prices[], int size);

int main(){
    double prices[] = {10.99, 50.99, 99.99, 12.00};
    int size = sizeof(prices)/sizeof(prices[0]);

    //need to pass the size, otherwise inside the function, 
    //prices[] is not array, but pointer (address), sizeof can't get the size of a address    
    double total = getTotal(prices, size);  //only need to pass the array name when calling; but when def function, passing in array with []
    
    std::cout << "$" << total;

    return 0;
}

double getTotal(double prices[], int size){
    double total = 0;

    for (int i = 0; i < size; i++){
        total += prices[i];
    }
    return total;
}
