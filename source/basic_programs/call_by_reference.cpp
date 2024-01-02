#include <iostream>

// Function that modifies the value of a variable through a reference
void modifyValue(int &value) {
    value *= 2;
}

int main() {
    int number = 10;

    std::cout << "Before function call: " << number << std::endl;

    // Pass 'number' by reference to the function
    modifyValue(number);

    std::cout << "After function call: " << number << std::endl;

    return 0;
}
