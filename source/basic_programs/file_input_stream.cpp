#include<iostream>
#include<fstream>

using namespace std;

ifstream inFile;
string str;
int number;
char letter;

int main(){
    inFile.open("/Users/govind/C-Practice/source/basic_programs/input.txt");

    if(inFile.fail()){
        cout << "Unable to open file" << endl;
        exit(1);
    }else{
        while(!inFile.eof()){
            getline(inFile, str);
            cout << str << ", ";
            getline(inFile, str);
            number = stoi(str);
            cout << number << ", ";
            getline(inFile, str);
            letter = str[0];
            cout << letter << endl;
        }
        inFile.close();
    }
    return 0;
}