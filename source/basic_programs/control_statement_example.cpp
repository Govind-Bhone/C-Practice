#include<iostream>

using namespace std;

int a = 1023;
bool flag = false;
char letter = 'd';

int main(){
    if( a > 1000)
        cout << "Warning: a is over 1000." << endl;
    
    if(a%2 ==0)
        cout << "a id odd " << endl;
    else 
        cout << " a id even " << endl;

    if( letter != 'a' && letter !='i' && letter !='e')
        cout << "The letter is not vowel";
    return 0;
}