#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::cin;
using std::string; 
using std::vector;

int main(){
    vector<string> names;
    vector<double> grades;

    typedef vector<string>::size_type vec_sz;

    cout << "Enter a student's name: " << "\n";
    string name;
    while (cin >> name){
        names.push_back(name);

        double midterm, final;
        cout << "Enter the midterm and final grades for the student:" << "\n";
        cin >> midterm >> final;
        cout << "Enter the three homework grades for the student:" << "\n";

        double homework_sum = 0.0;
        for (int i = 0; i < 3; i++){
            double homework_grade;
            cin >> homework_grade;
            homework_sum += homework_grade;
        }
        grades.push_back( 0.2 * midterm + 0.4 * final + 0.4 * homework_sum/3);
        cout << "Enter a student's name: or quit" << "\n";       
    }

    for (vec_sz i = 0; i < names.size(); i++){
        cout << names[i] << "'s final grade is: " << grades[i] << "\n";
    }

    return 0;
}