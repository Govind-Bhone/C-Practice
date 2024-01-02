#include <iostream>

int main() {
    // Example 1: Using a void pointer to store an integer
    int integerValue = 42;
    void *voidPointer = &integerValue;

    // Need to cast the void pointer back to int pointer before dereferencing
    int *intPointer = static_cast<int*>(voidPointer);

    std::cout << "Example 1: Value through void pointer: " << *intPointer << std::endl;

    // Example 2: Using a void pointer to store a double
    double doubleValue = 3.14;
    voidPointer = &doubleValue;

    // Need to cast the void pointer back to double pointer before dereferencing
    double *doublePointer = static_cast<double*>(voidPointer);

    std::cout << "Example 2: Value through void pointer: " << *doublePointer << std::endl;

    return 0;
}
