#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;
using std::cout;
using std::cin;

int main(){
    vector<string> inputs;
    vector<int> counts;
    typedef vector<string>::size_type vec_sz;

    cout << "Enter some words: " << "\n";
    string x;
    while (cin >> x){
        int index = -1;
        vec_sz size = inputs.size();

        for (int i = 0; i < size; i++){
            if (inputs[i] == x){
                index = i;
            }
        }

        if (index != -1){
            counts[index] += 1; 
        }
        else{
            inputs.push_back(x);
            counts.push_back(1);
        }
    }

    vec_sz size = inputs.size();
    for (int i = 0; i < size; i++){
        cout << "The word " << inputs[i] << " appeared " << counts[i] << " times." << "\n";
    }
       
    return 0;
}