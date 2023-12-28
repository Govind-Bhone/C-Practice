#include <iostream> 
using namespace std; 
  
int fun(int* ptr) 
{ 
    return (*ptr + 10); 
} 
  
int main(void) 
{ 
    const int val = 10; 
    const int *ptr = &val; 
    int *ptr1 = const_cast <int *>(ptr); 
    cout << fun(ptr1) << endl; 
    return 0; 
} 