#include<iostream>
//#define AGE_LENGTH 4

const int AGE_LENGTH = 4;
using namespace std;

int age[AGE_LENGTH];

// Implicit conversion
float temparature[] = {34.5, 34,7,34,9,9.5};

int main(){
    age[0] = 25;
    age[1] = 30;
    age[2] = 40;
    age[3] = 50;

    cout << "Age[0] = "<<age[0] << endl;
    cout << "Age[1] = "<<age[1] << endl;
    cout << "Age[2] = "<<age[2] << endl;
    cout << "Age[3] = "<<age[3] << endl;

    cout << "Temparature[0] = "<<temparature[0] << endl;
    cout << "Temparature[1] = "<<temparature[1] << endl;
    cout << "Temparature[2] = "<<temparature[2] << endl;
    cout << "Temparature[3] = "<<temparature[3] << endl;

    return 0;

}