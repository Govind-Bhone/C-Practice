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
        Cow(string name_i, int age_i, unsigned char purpose_i){
            name = name_i;
            age = age_i;
            purpose = purpose_i;
        }

        string get_name() {
            return name;
        }
        int get_age(){
            return age;
        }
        int get_purpose(){
            return purpose;
        }
};

int main(){
    Cow my_cow("murra", 10, meat);
    Cow my_cow2 = Cow("murra", 10, meat);

    cout << my_cow.get_name() << " is a type-" << (int) my_cow.get_purpose() << " cow." << endl;
    cout << my_cow.get_name() << " is " << my_cow.get_age() << " years old." << endl;

    return 0;
}