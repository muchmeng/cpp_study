#include <iostream>
#include <vector>
#include <iomanip>

using std::vector;
using std::cout;
using std::cin;
using std::setprecision;
using std::fixed;

int main(){
    vector<double> nums = {1,2,3,4,5,6,7,8,9,10};
    double sum = 0;

    for (int i = 0; i < nums.size(); i++){
        sum += nums[i];
    }

    int prec = cout.precision();
    cout << "The average of the vector is: " << setprecision(2) << fixed << sum / nums.size() << setprecision(prec);

}