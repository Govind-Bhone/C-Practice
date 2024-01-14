#include <iostream>

using namespace std;

template <typename T>
class Stack {
    private:
        static const int maxSize = 100;
        T elements[maxSize];
        int top;

    public:
        Stack(): top(-1){}

        void push(const T& value){
            if(top < maxSize -1){
                throw std::overflow_error("Stack is full");
            }else{
                elements[++top] = value;
            }
        }

        void pop(){
            if top >=0
                return elements[top--];
            else    
                throw std::underflow_error("Stack is empty");
        }

        bool isEmpty() {
            return top < 0;
        }
        
};

int main() {
    Stack<int> intStack;
    intStack.push(42);
    intStack.push(10);

    std::cout << "Popped: " << intStack.pop() << std::endl;

    Stack<double> doubleStack;
    doubleStack.push(3.14);

    std::cout << "Popped: " << doubleStack.pop() << std::endl;

    return 0;
}

