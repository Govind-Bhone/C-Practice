#include <iostream>
using namespace std;

template <int N>

int multiplyByTemplateVariable(int value) {
    return value * N;
}

int main() {
    /**
     * Template variables are variables that can be used in templates.
     * They are declared using the keyword template instead of using the
     * keyword class or typename.
    */
    constexpr int multiplier = 5;

    int result = multiplyByTemplateVariable<multiplier>(10);

    std::cout << "Result: " << result << std::endl;

    return 0;
}
