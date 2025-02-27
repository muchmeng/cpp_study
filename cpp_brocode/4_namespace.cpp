#include <iostream>

namespace first{
    int x = 1;

}

namespace second{
    int x = 2;

}


// int main(){
//     // Namespace = provides a solution for preventing name conflicts in large projects.
//     // Each entity needs a unique name. A namespace allows for identically named entities as long as the namespaces are different.
//     using namespace first;

//     std::cout << x << std::endl; // :: scope resoluation operators
//     std::cout << second::x; // :: scope resoluation operators
    
//     return 0;
// }

int main(){
    //using namespace std; //better not do that, two many objects under std, could trigger conflict
    using std::cout; //safer way, do this
    using std::string;
    using namespace first;
    string name = "Duo";

    cout << x; // :: scope resoluation operators
    cout << second::x; // :: scope resoluation operators
    cout << name;
    
    return 0;
}