#include<iostream>

using namespace std;

int main(){
    // int
    signed int a = 10;
    cout << a <<":" <<sizeof(a) <<endl;
    unsigned int b = 20;
    cout << b <<":" << sizeof(b) << endl;


    //char
    char c = 'A';
    cout <<(int)c<<":" << c <<":" << sizeof(c)<<endl;

    // portable int datatypes

    uint16_t d = 20;
    cout << d << ":" << sizeof(d) <<endl;


    return 0; 




}