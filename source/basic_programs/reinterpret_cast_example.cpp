#include <iostream>

int main() {
    // Example 1: Casting integer pointer to double pointer
    int intValue = 42;
    int *intPointer = &intValue;

    // Using reinterpret_cast to cast from int* to double*
    double *doublePointer = reinterpret_cast<double*>(intPointer);

    // Dereferencing the double pointer (this is not safe and might result in undefined behavior)
    std::cout << "Example 1: Dereferencing double pointer: " << *doublePointer << std::endl;

    // Example 2: Casting double pointer to integer pointer
    double doubleValue = 3.14;
    double *anotherDoublePointer = &doubleValue;

    // Using reinterpret_cast to cast from double* to int*
    int *anotherIntPointer = reinterpret_cast<int*>(anotherDoublePointer);

    // Dereferencing the int pointer (this is not safe and might result in undefined behavior)
    std::cout << "Example 2: Dereferencing int pointer: " << *anotherIntPointer << std::endl;

    return 0;
}
