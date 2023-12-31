#include <iostream>

// Enum declaration
enum Color {
    RED,    // 0
    GREEN,  // 1
    BLUE    // 2
};

int main() {
    // Enum variable declaration
    Color myColor = GREEN;

    // Using enum values
    if (myColor == RED) {
        std::cout << "The color is red." << std::endl;
    } else if (myColor == GREEN) {
        std::cout << "The color is green." << std::endl;
    } else if (myColor == BLUE) {
        std::cout << "The color is blue." << std::endl;
    }

    return 0;
}
