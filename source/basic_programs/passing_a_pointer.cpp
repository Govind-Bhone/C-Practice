#include <iostream>

void modifyValue(int* ptr) {
    // Dereference the pointer to modify the data it points to
    *ptr = 42;
}

int main() {
    int value = 10;
    int* ptr = &value;

    std::cout << "Original value: " << value << std::endl;
    std::cout << "Original address: " << ptr << std::endl;

    // Pass the pointer to modify the value through the function
    modifyValue(ptr);

    std::cout << "Modified value: " << value << std::endl;
    std::cout << "Modified address: " << ptr << std::endl;

    return 0;
}
