#include <iostream>

// Global variable
int globalVariable = 10;

// Function using the global variable
void printGlobalVariable() {
    std::cout << "Global Variable: " << globalVariable << std::endl;
}

int main() {
    // Accessing the global variable from the main function
    std::cout << "Inside main: " << globalVariable << std::endl;

    // Calling a function that uses the global variable
    printGlobalVariable();

    return 0;
}
