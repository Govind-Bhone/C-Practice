#include<iostream>
#include<typeinfo>

using namespace std;


auto a = 8;
auto b = 123456789010;
auto c = 3.14f;
auto d = 3.14;
auto e = true;
auto f = "string";
auto g = 'd';

int main(){
    cout << typeid(a).name() << endl;
    cout << typeid(b).name() << endl;
    cout << typeid(c).name() << endl;
    cout << typeid(d).name() << endl;
    cout << typeid(e).name() << endl;
    cout << typeid(f).name() << endl;
    cout << typeid(g).name() << endl;
}