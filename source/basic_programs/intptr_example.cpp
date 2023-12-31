#include <iostream>
#include <cstdint>

/**
 * This is a common use case for intptr_t when you need to temporarily convert a pointer to 
 * an integer for storage or manipulation and then later convert it back to a pointer. 
 * Keep in mind that directly 
 * manipulating pointers like this should be done with caution to avoid undefined behavior.
*/
int main() {
    int value = 42;
    int* ptr = &value;

    // Convert pointer to intptr_t
    intptr_t intptrValue = reinterpret_cast<intptr_t>(ptr);

    // Display the original pointer and the intptr_t value
    std::cout << "Original Pointer: " << ptr << std::endl;
    std::cout << "Original Pointer Value : " << *ptr << std::endl;
    std::cout << "intptr_t Value: " << intptrValue << std::endl;
  
    // Convert intptr_t back to pointer
    int* ptrRestored = reinterpret_cast<int*>(intptrValue);

    // Display the restored pointer
    std::cout << "Restored Pointer: " << ptrRestored << std::endl;
    std::cout << "Restored Pointer Value: " << *ptrRestored << std::endl;

    return 0;
}
