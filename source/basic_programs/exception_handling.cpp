#include <iostream>
#include <stdexcept>

class MyException : public std::exception {
public:
    const char* what() const noexcept override {
        return "My custom exception";
    }
};

int main() {
    try {
        throw MyException();
    }
    catch (const MyException& e) {
        std::cerr << "Caught my exception: " << e.what() << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "Caught a standard exception: " << e.what() << std::endl;
    }

    return 0;
}
