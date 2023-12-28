#include<iostream>
#include<string>
#include<cstdint>

/**
 * define symbols they are called as micros. find and replace those macros in code
*/
#define  CAPACITY 5000
#define DEBUG

using namespace std;

int main(){

    uint32_t large = CAPACITY;
    uint8_t small = 37;

    #ifdef DEBUG 
        cout << "[About to perform the addition]" << endl;
    #endif

    large += small ;

    cout << "Large is "<<large<<endl;

    return 0;
}