#ifndef _STACK
#define _STACK

/**
 *   New library "exception" is used instead of "stdexcept"
 * 

#include <stdexcept>

class StackException : public std::exception {
public:
    explicit StackException(const char* s) noexcept : message(s) {}

    const char* what() const noexcept override {
        return message;
    }

private:
    const char* message;
};

*/

// simple exception class
class StackExeption : public std::exception {
    const char * msg;
    StackExeption(){};    // no default constructor
public:
    explicit StackExeption(const char * s) throw() : msg(s) { }
    const char * what() const throw() { return msg; }
};

template<typename T>
class Stack{
    private:
        static const int maxsize = 1000;
        static const int defaultSize = 10;
        int _size;
        int _top;
        T * stackPtr;

    public:
        explicit Stack(const int s= defaultSize);
        ~Stack() {
            delete[] stackPtr;
        }

        T & push(const T&);
        T & pop();
        const boolean isEmpty() {
            return _top < 0;
        }
        bool isFull() const {
            return _top >= _size - 1;
        }
        int top() const {
            return _top;
        }
        int size() const {
            return _size;
        }
};

template<typename T>
Stack<T>::Stack(const int s){
    if(s> maxsize || s < 1) throw StackExeption("invalid stack size");
    else _size = s;
}

Stack<T>:: push(const T &i){
    if(isFull()) throw StackExeption("stack full");
    return stackPtr[++_top] = i;
}

Stack<T>:: pop(const T &i){
    if(isEmpty()) throw StackExeption("stack empty");
    return stackPtr[_top--];
}


#endif // _STACK
