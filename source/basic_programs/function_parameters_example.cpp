#include<iostream>

using namespace std;

int square(int x){
    x = x * x;
    return x;
}

int square_ref(int &x){
    x = x * x;
    return x;
}

// Take arguments by address
void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

// Take arguments by reference
void swap_ref(int &x, int &y){
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main(){
    int a = 10, b;
    b = square(a);
    cout << "The value of a is " << a << endl;
    cout << "The value of b is " << b << endl;

    cout << endl;

    // b = square_ref(a);
    // cout << "The value of a is " << a << endl;
    // cout << "The value of b is " << b << endl;

    cout << endl;
    swap(&a, &b);
    cout << "The value of a is " << a << endl;
    cout << "The value of b is " << b << endl;

    cout << endl;
    swap_ref(a, b);
    cout << "The value of a is " << a << endl;
    cout << "The value of b is " << b << endl;

    return 0;
}