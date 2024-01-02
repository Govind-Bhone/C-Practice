#include <iostream>

int main() {
    // Initializing a pointer with nullptr
    int* nullPointer = nullptr;
    int* nullPointer2 = NULL;

    // Alternatively, you might see older code using NULL
    // int* nullPointer = NULL;

    if (nullPointer == nullptr && nullPointer2 == nullptr) {
        std::cout << "Pointer is nullptr. It does not point to any memory location." << std::endl;
    } else {
        std::cout << "Pointer is not nullptr." << std::endl;
    }

    // Attempting to dereference a null pointer (results in undefined behavior)
    // int value = *nullPointer;

    return 0;
}
