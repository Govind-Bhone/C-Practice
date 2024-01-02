#include<iostream>
#include "cow.cpp"

int main(){
    int a = 32;
    int * ptr = &a;
    Cow *my_cow;

    std::cout << " The content of a is " << a << std::endl;
    std::cout << " The ptr pointing to address " << ptr << std::endl;
    std::cout << " The address of a is " << &a << std::endl;
    std::cout << " The value of memory ptr pointing to " << *ptr << std::endl;
    std::cout << " The address of ptr is " << &ptr << std::endl;


    Cow my_cow2("murra", 10, meat);
    Cow my_cow3 = Cow("murra", 10, meat);

    std::cout << my_cow2.get_name() << " is a type-" << (int) my_cow2.get_purpose() << " cow." << std::endl;
    std::cout << my_cow2.get_name() << " is " << my_cow2.get_age() << " years old." << std::endl;


    my_cow= new Cow("Gertie", 7 , pet);

    std::cout << my_cow->get_name() << " is a type-" << (int) my_cow->get_purpose() << " cow." << std::endl;
    std::cout << (*my_cow).get_name() << " is " << my_cow->get_age() << " years old." << std::endl;


    delete my_cow; // This calls destructor function of object
    return 0;
}