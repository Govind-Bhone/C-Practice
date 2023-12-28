#include <iostream>

class MyClass {
private:
    int value;

public:
    // Constructor
    MyClass(int initialValue) : value(initialValue) {}

    // Regular member function (can modify the object's state)
    void setValue(int newValue) {
        value = newValue;
    }

    // Constant member function (cannot modify the object's state)
    int getValue() const {
        // Attempting to modify 'value' here would result in a compilation error
        // value = 0; // Error: assignment of member 'MyClass::value' in read-only object

        return value;
    }
};

int main() {

    auto createObject = [](int initialValue) {
        // Creating objects as local variables in functions
        MyClass newObj(initialValue);
        newObj.setValue(75);
        return newObj;
    };

    // Creating objects on the stack
    MyClass obj1(42);
    MyClass obj2(100);

    // Using the objects
    obj1.setValue(50);
    std::cout << "Value of obj1: " << obj1.getValue() << std::endl;
    std::cout << "Value of obj2: " << obj2.getValue() << std::endl;

    // Creating objects on the heap using pointers
    MyClass* ptrObj1 = new MyClass(42);
    MyClass* ptrObj2 = new MyClass(100);

    // Using the objects
    ptrObj1->setValue(50);
    std::cout << "Value of obj1: " << ptrObj1->getValue() << std::endl;
    std::cout << "Value of obj2: " << ptrObj2->getValue() << std::endl;

    // Don't forget to delete objects created on the heap to avoid memory leaks
    delete ptrObj1;
    delete ptrObj2;

    /**
     * Creating objects in a container (e.g., vector) No need to call delete,
     *  the vector's destructor will take care of it
     *       objContainer.clear(); // Optionally clear the vector if needed
     * When the objContainer goes out of scope, the destructor of each MyClass object 
     * within the vector will be automatically called. The vector's destructor is responsible for cleaning 
     * up the memory associated with its elements.
     * This is one of the advantages of using standard containers and C++'s automatic memory management.
     * It helps prevent memory leaks and simplifies memory management compared to manual memory allocation 
     * with new and delete.
     * 
     * However, if your vector contains pointers to dynamically allocated objects (e.g., std::vector<MyClass*>), 
     * then you would need to manually delete each object before clearing the vector. In such cases,
     *  consider using smart pointers (std::unique_ptr or std::shared_ptr) to manage the memory more safely.
     * 
     */
    std::vector<MyClass> objContainer;
    objContainer.push_back(MyClass(42));
    objContainer.push_back(MyClass(100));

    // Using the objects
    objContainer[0].setValue(50);
    std::cout << "Value of obj1: " << objContainer[0].getValue() << std::endl;
    std::cout << "Value of obj2: " << objContainer[1].getValue() << std::endl;

    // Using objects created in a function
    MyClass obj3 = createObject(30);
    std::cout << "Value of obj3: " << obj3.getValue() << std::endl;

    MyClass myObject= MyClass(42);
    myObject.setValue(100);
    std::cout << "After setting value: " << myObject.getValue() << std::endl;

    // Using the constant member function
    std::cout << "Current value: " << myObject.getValue() << std::endl;

    return 0;
}
