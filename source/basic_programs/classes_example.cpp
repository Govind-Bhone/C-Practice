#include<iostream>
#include<string>

using namespace std;


enum cow_purpose { dairy, meat, hide, pet};


class Cow{
    private:
        string name;
        int age;
        unsigned char purpose;
    public:
        string get_name() {
            return name;
        }
        int get_age(){
            return age;
        }
        int get_purpose(){
            return purpose;
        }

        void set_name(string name_i){
            name = name_i;
        }
        void set_age(int age_i){
            age = age_i ;
        }
        void set_purpose(int purpose_i){
            purpose = purpose_i;
        }


};

int main(){
    Cow my_cow ;
    my_cow.set_age(10);
    my_cow.set_name("murra");
    my_cow.set_purpose(meat);

    cout << my_cow.get_name() << " is a type-" << (int) my_cow.get_purpose() << " cow." << endl;
    cout << my_cow.get_name() << " is " << my_cow.get_age() << " years old." << endl;

    return 0;


}