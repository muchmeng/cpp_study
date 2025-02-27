#include <iostream>
#include <vector>

// typedef std::vector<std::pair<std::string, int>> pairlist_t; // usually naming will have _t to indicate it is a typedef
// typedef std::string text_t;
// typedef int number_t;

// int main(){
//     // typedef = reserved keyword used to create an additional name (alias) for another data type. 
//     // New identifier for an existing type. Helps with readability and reduces typos
//     // Use when thiere is a clear benefit, otherwise, relaced with 'using' (work better w/ templates)
//     //std::vector<std::pair<std::string, int>> pairlist; 
//     pairlist_t pairlist;
//     //std::string firstName;
//     text_t firstName = "Duo";
//     std::cout<<firstName<<'\n';

//     number_t age = 26;
//     std::cout<<age<<'\n';

//     return 0;
// }
using text_t = std::string; //equivalent do this
using number_t = int;


int main(){
    text_t firstName = "Duo";
    number_t age = 26;

    std::cout<<firstName<<'\n';
    std::cout<<age<<'\n';

    return 0;
}