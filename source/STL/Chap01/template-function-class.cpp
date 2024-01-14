#include<iostream>
#include<string>

using namespace std;

template<class T>
void swap_template_variable(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

/*
compiler create specialization for each type of data
*/

// void swap_variable(int &a, int &b) {
//     int temp = a;
//     a = b;
//     b = temp;
// }


int main() {
    float a = 10;
    float b = 20;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // No need for explicit template argument, the compiler can deduce it
    swap_template_variable<float>(a, b);
    int c = 10;
    int d = 20;    
    swap_template_variable<int>(c, d);

    cout << "c = " << c << endl;
    cout << "d = " << d << endl;

    return 0;
}
