#include <iostream>

// Global function declaration
void globalFunction(int a, int b);

int main() {
    int x = 5;
    int y = 10;

    // Call the global function
    globalFunction(x, y);

    return 0;
}

// Global function definition
void globalFunction(int a, int b) {
    // Perform some operation
    int result = a + b;

    // Display the result
    std::cout << "Result of globalFunction: " << result << std::endl;
}
