#include <algorithm>
#include <iostream>
#include <vector>

using std::cout;
using std::vector;
using std::endl;
using std::sort;

int main(){
//vector<int> v = {1,2,3,4,5,6,7,8,9,10};
vector<int> v = {5, 4, 3, 2, 1};

sort(v.begin(), v.end());

typedef vector<int>::size_type vec_sz;

vec_sz size = v.size();
vec_sz q1 = size / 4;
vec_sz q2 = size / 2;
vec_sz q3 = size * 3 / 4;

cout << "First Quarter is: " << v[q1] << endl;
cout << "Second Quarter is: " << v[q2] << endl;
cout << "Third Quarter is: " << v[q3] << endl;

return 0;

}
