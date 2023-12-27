#include<iostream>

char str[20];

int main(){
    std::cout<< "What is your name?";
    std::cin >> str;
    std::cout << "Hello," << str;
    return 0;
}