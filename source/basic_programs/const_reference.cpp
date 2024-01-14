#include <iostream>

// Function accepting constant references
void printValue(const int &value) {
    std::cout << "Value: " << value << std::endl;
}

int main() {
    // Pass constant literal to function
    printValue(42);

    // Declare constant variable and pass it to function
    const int constantValue = 100;
    printValue(constantValue);

    return 0;
}
