#include <iostream>
#include <vector>
#include <string>

using std::vector; using std::string;
using std::istream; using std::cin;
using std::cout;

vector<string> read(){
    vector<string> words;
    cout << "Enter the words: "; 
    string x;
    while (cin >> x){
        words.push_back(x);
    };
    return words;
}

int main(){
    vector<string> words;

    words = read();
    vector<string>::size_type size = words.size();

    cout << "Total number of words in the input: " << size << "\n";
    
    vector<string> inputs;
    vector<int> counts;

    
    for (int i = 0; i < size; i++){
        string word = words[i];
        int index = -1;
        for (int j = 0; j < inputs.size(); j++){
            if (inputs[j] == word){
                index = j;
            }
        }

        if (index != -1){
            counts[index] += 1; 
        }
        else{
            inputs.push_back(word);
            counts.push_back(1);
        }
    }    

    for (int i = 0; i < inputs.size(); i++){
        cout << "The word " << inputs[i] << " appeared " << counts[i] << " times." << "\n";
    }

    return 0;
}

