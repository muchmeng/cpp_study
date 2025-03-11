#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::string;

int main(){
    cout << "Enter some words: " << "\n";
    int largest = 0;
    int shortest = 999;
    string x;
    while (cin >> x){
        int size = x.size();
        if (size > largest){
            largest = size;
        }

        if (size < shortest){
            shortest = size;
        }
    }

    cout << "The longest length is: " << largest << "\n";
    cout << "The shortest length is: " << shortest << "\n";

    return 0;
}