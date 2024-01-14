#include<iostream>
#include<string>

using namespace std;

template<typename T>
T maxOf(const T &a, const T &b){
    cout << "typeid(a).name() = " << typeid(a).name() << endl;
    cout << a << " " << b << endl;
    return (a > b ? a : b);
}

// int maxOf(const int &a, const int &b){
//     return (a > b ? a : b);
// }

int main(){
    // int a = 10;
    // int b = 20;

    // int c = maxOf<int>(a, b);
    // cout << "c = " << c << endl;

    // compare pointers and not the strings which is not what we want
    const char * a1 = "seventy";
    const char * b1 = "ninety";

    const char * c1 = maxOf<const char *>(a1, b1);
    cout << "c1 = " << c1 << endl;

    cout << "a1 = " << a1 << endl;
    cout << "b1 = " << b1 << endl;

    // compare the strings
    // string a2 = "seventy";
    // string b2 = "ninety";

    // string c2 = maxOf<string>(a2, b2);
    // cout << "c2 = " << c2 << endl;


    const char* a3 = new char[8]; // Example of dynamic allocation
    delete[] a3; // Call delete[] to free the allocated memory


    return 0;
}