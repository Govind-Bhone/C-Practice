#include <iostream>
using namespace std;

/**
 * 
 * Template variables are variables that can be used in templates.
 * They are declared using the keyword template instead of using the
 * keyword class or typename.
 * 
*/
template<typename T>

T pi = T(3.1415926535897932385L);

template<typename T>
T area_of_circle(const T r)
{
    return pi<T> * r * r;
}

int main()
{
    cout.precision(20);

    cout << pi<double> << ", area of circle: " << area_of_circle<double>(3) << endl;
    cout << pi<long double> << ", area of circle: " << area_of_circle<long double>(45) << endl;

    return 0;
}
