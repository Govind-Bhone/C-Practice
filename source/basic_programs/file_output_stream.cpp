#include<iostream>
#include<fstream>

using namespace std;

ofstream outFile;
float a = 4.33f, b= 5.302f;

int main(){
    outFile.open("/Users/govind/C-Practice/source/basic_programs/output.txt");
    if(outFile.fail()){
        cout << "Unable to open file" << endl;
        exit(1);
    }else{
        outFile << "a = "<< a << endl;
        outFile << "b = "<< b << endl;
        outFile << "a + b = "<< a + b << endl;
        outFile << "a * b = "<< a * b << endl;

        outFile.close();
        cout << "File written successfully !" << endl;
    }
    return 0;
}