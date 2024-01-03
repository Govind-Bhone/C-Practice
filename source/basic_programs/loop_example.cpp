#include<iostream>
#include<vector>

using namespace std;

#include <vector>

vector<int> numbers ;

int main(){    
    numbers.push_back(12);
    numbers.push_back(13);
    numbers.push_back(14);
    numbers.push_back(15);
    numbers.push_back(16);

    auto ptr = numbers.begin();

    while(ptr != numbers.end()){
        cout << *ptr << " ";
        ptr = next(ptr, 1);
    }
    cout << endl;

    int i=0;
    do{
        cout << numbers[i] << " ";
        i++;
    } while( i < (int)numbers.size());
    cout << endl;

    float average=0.0f;
    for (auto ptr = numbers.begin();ptr != numbers.end();ptr++){
        average += *ptr;
    }
    average = average / numbers.size();
    cout << "Average is " << average << endl;

    float average1=0.0f;
    for ( auto x: numbers){
        average1 += x;
    }
    average1 = average1 / numbers.size();
    cout << "Average is " << average1 << endl;

    return 0;
}