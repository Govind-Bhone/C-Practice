#include<vector>
#include<iostream>
#include "cow.cpp"

using namespace std;

vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19};

int main(){
    cout << "The vector has " << primes.size() << " elements" << endl;
    primes.push_back(20);
    primes.push_back(30);
    primes.push_back(40);
    primes.push_back(50);
    primes.push_back(60);
    cout << "The vector has " << primes.size() << " elements" << endl;
    cout << "The element at index 2 is " << primes[2] << endl;
    primes[2] = 99;
    cout << "The element at index 2 is " << primes[2] << endl;

    cout << endl;



    vector<Cow> cattle;
    cattle.push_back(Cow("B", 6 , meat));
    cattle.push_back(Cow("C", 7 , meat));
    cattle.push_back(Cow("D", 8 , meat));
    cattle.push_back(Cow("E", 9 , meat));

    cout << "The first cow is "<< cattle.begin()->get_name() << endl;
    cout << "At index 1 we have " << cattle[1].get_name() << endl;
    cout << "Next to last is " << prev(cattle.end(), 3)->get_name() << endl;
    cout << "The last cow is " << (cattle.end()-1)->get_name() << endl;

    return 0;
}
