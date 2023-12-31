#include<iostream>

using namespace std;


int main(){
    int nums[5] = {10,20,30,40,50};

    float result;

    size_t numSize = sizeof(nums) / sizeof(nums[0]);

    for(int i=0; i<numSize;i++){
        result = result + nums[i];
    } 
    result /= numSize;
    cout << "Average is " << result <<endl;
    return 0;
}