#include<iostream>

using namespace std;


int main(){


    // Implicit (Automatic) Casting

    int integerNumber = 10;
    double doubleNumber = integerNumber;

    cout << integerNumber << ":" << typeid(integerNumber).name() << endl;
    cout << doubleNumber << ":" << typeid(doubleNumber).name() << endl;

    // Explicit (Manual) Casting:
    double dNumber = 34.56;
    int intNumber = dNumber;

    // C-style cast 
    int intExplicitNumber = (int) dNumber;

    // functional cast
    int intFuncNumber = int(dNumber);

    // static cast

    int intStaticNumber = static_cast<int>(dNumber);

    cout << dNumber << ":" << typeid(dNumber).name() << endl;
    cout << intNumber << ":" << typeid(intNumber).name() << endl;
    cout << intExplicitNumber << ":" << typeid(intExplicitNumber).name() << endl;
    cout << intFuncNumber << ":" << typeid(intFuncNumber).name() << endl;
    cout << intStaticNumber << ":" << typeid(intStaticNumber).name() << endl;

    return 0;
}