#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using std::max;
using std::cout;
using std::string;

struct Student_info{
    std::string name;
    double midterm, final;
    std::vector<double> homework;
};

int main(){
    // int maxlen = 10;
    string::size_type maxlen = 10;
    Student_info s;
    s.name = "Duo";
    cout << "Max is: " << max(s.name.size(), maxlen);

    return 0;
}