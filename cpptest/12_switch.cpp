#include <iostream>

// int main(){
//     // switch = alternative to using many "else if" statements compare one value against matching cases

//     int month;
//     std::cout << "Enter the quarter (1-12): ";
//     std::cin >> month;

//     switch(month){
//         case 1:
//             std::cout << "It is Jan";
//             break;
//         case 2:
//             std::cout << "It is Feb";
//             break;
//         case 3:
//             std::cout << "It is Mar";
//             break;
//         case 4:
//             std::cout << "It is Apr";
//             break;
//         case 5:
//             std::cout << "It is May";
//             break;
//         case 6:
//             std::cout << "It is Jun";
//             break;
//         case 7:
//             std::cout << "It is Jul";
//             break;
//         case 8:
//             std::cout << "It is Aug";
//             break;
//         case 9:
//             std::cout << "It is Sep";
//             break;
//         case 10:
//             std::cout << "It is Oct";
//             break;
//         case 11:
//             std::cout << "It is Nov";
//             break;
//         case 12:
//             std::cout << "It is Dec";
//             break;
//         default://default case: no matching case, enter this
//             std::cout << "Please enter in only numbers 1-12!";
//     }

//     return 0;
// }

int main(){
    char grade;
    std::cout << "Waht letter grade: ";
    std::cin >> grade;

    switch(grade){
        case 'A':
            std::cout << "You did great!";
            break;
        case 'B':
            std::cout << "You did good!";
            break;
        case 'C':
            std::cout << "You did okay!";
            break;
        case 'D':
            std::cout << "You did not do good!";
            break;
        case 'F':
            std::cout << "You failed!";
            break;
        default:
            std::cout << "Please enter only grades A-F!";

    }

}