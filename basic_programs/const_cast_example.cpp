#include <iostream> 
using namespace std; 

class student 
{ 
private: 
	int roll; 
public: 
    int d = 10;
	// constructor 
	student(int r):roll(r) {} 

	// A const function that changes roll with the help of const_cast 
	void fun() const
	{ 
        //d = 30;
        // this’ is a constant pointer to a constant object
        // const_cast changes the type of ‘this’ pointer to ‘student* this’
		 student* newS = const_cast<student*>(this);
         newS->roll = 5; 
	} 

	int getRoll() { return roll; } 
}; 

int main(void) 
{ 
	student s(3); 
	cout << "Old roll number: " << s.getRoll() << endl; 

	s.fun(); 

	cout << "New roll number: " << s.getRoll() << endl; 

	return 0; 
} 
