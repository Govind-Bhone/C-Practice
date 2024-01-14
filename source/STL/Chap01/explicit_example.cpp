class MyClass {
public:
    // Single-argument constructor
    MyClass(int x) {
        // constructor logic
    }
};

int main() {
    MyClass obj = 42;  // Implicit conversion from int to MyClass
    std::cout << obj.x << std::endl;  // Prints 42
    return 0;
}
