#include<iostream>
#include<cstdint>
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


    // floating points

    float e = 10.2;
    double f = 10.3;
    long double g = 10.567;


    // bool

    bool h = true;

    cout <<e<<f<<g<<h<<endl;



    //string array of chars as native type

    char str[30] = "govind";

    cout <<str<<endl ;
    cout <<&str <<endl;



    //Pointers

    int i = 10;
    cout << *(&i) <<endl;


    // Fixed width datatype
    int32_t myInt = 42;
    uint16_t myUnsignedInt = 123;

    // Smallest and Fastest Integer Types

    int_least16_t leastA = 10;
    int_fast32_t fastA = 100;


    intmax_t largestInteger = 9223372036854775807;  // Represents the largest signed 64-bit integer

    std::cout << "Largest Integer: " << largestInteger << std::endl;

     // Define variables using intmax_t
    intmax_t largePositive = 9223372036854775807;  // Largest positive value for intmax_t
    intmax_t largeNegative = -9223372036854775807 - 1;  // Largest negative value for intmax_t

    // Display the values
    std::cout << "Largest Positive: " << largePositive << std::endl;
    std::cout << "Largest Negative: " << largeNegative << std::endl;

    // Calculate the sum
    intmax_t sum = largePositive + 1;
    std::cout << "Sum: " << sum << std::endl;

    return 0; 

}