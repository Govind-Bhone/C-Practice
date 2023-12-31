#include <iostream> 
using namespace std; 
  
int fun(int* ptr) 
{ 
    *ptr = *ptr + 10; 
    return (*ptr); 
} 
  
int main(void) 
{ 
    const int val = 10;
    //int val = 10; 
    const int *ptr = &val; 
    int *ptr1 = const_cast <int *>(ptr); 
    fun(ptr1); 

    // It will not update the value because val is constant
    cout << val << endl; 
    return 0; 
} 