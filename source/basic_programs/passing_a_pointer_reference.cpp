#include <iostream>

void modifyPointer(int*& ptr) {
    // Modify the pointer itself (change the memory address it points to)
    int newValue = 42;
    ptr = &newValue;
    std::cout << "within local scope value: " << *ptr << std::endl;
    std::cout << "within local scope address: " << ptr << std::endl;
}

void modifyPointer2(int*& ptr) {
    int* newValue = new int(42);
    ptr = newValue;
    std::cout << "GOV " << *ptr << std::endl;
    std::cout << "GOV " << ptr << std::endl;
    // Note: You need to manage the memory properly to avoid memory leaks
    // In this modified example, newValue is dynamically allocated using new. However, 
    // keep in mind that when you use dynamic memory allocation, it becomes your responsibility to 
    // free that memory using delete at an appropriate time to avoid memory leaks.
}

int main() {
    int value = 10;
    int* ptr = &value;

    std::cout << "Original value: " << *ptr << std::endl;
    std::cout << "Original address: " << ptr << std::endl;

    // Pass the pointer by reference to modify the pointer itself
    modifyPointer(ptr);

    std::cout << "Modified address: " << ptr << std::endl;
    /**
     * The issue is with the line ptr = &newValue;. You are assigning the address of the local 
     * variable newValue to the pointer ptr. Once the modifyPointer function exits, newValue goes 
     * out of scope, and the memory it occupied may be reused for other purposes. 
     * Accessing this memory through the modified pointer ptr results in undefined behavior.
    */
    std::cout << "Modified value: " << *ptr << std::endl;

    std::cout<<std::endl;

    return 0;
}
