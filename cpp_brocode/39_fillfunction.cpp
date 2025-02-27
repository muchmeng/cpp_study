#include <iostream>

int main(){
    // fill() = Fills a range of elements with a specified value: fill(begin, end, value) -> (beginning address, ending address, value to fill)
    const int SIZE = 9;

    std::string foods[SIZE];

    fill(foods, foods + SIZE/3, "pizza");
    fill(foods + SIZE/3, foods + SIZE/3 * 2, "hamburger");
    fill(foods + SIZE/3 * 2, foods + SIZE, "cake");

    for (std::string food : foods){
        std::cout << food << "\n";
    }

    return 0;
}