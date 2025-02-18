#include <iostream>

int main(){
    // Null vavlue = a special value that means something has no value.
    // When a pointer is holding a null value, that pointer is not pointing at anything (null pointer)

    // nullptr = keyword represents a null pointer literal

    // nullptrs are helpful when determining if an address was successfully assigned to a pointer

    // When using pointers, be careful that your code isn't dereferencing nullptr or pointing to free memory
    // This will cause undefined behavior

    int *pointer = nullptr;
    int x = 123;

    pointer = &x;

    if(pointer == nullptr){
        std::cout << "Address was not assigned!\n";
    }
    else{
        std::cout << "Address was assigned!\n";
        std::cout << *pointer;
    }

    return 0;
}