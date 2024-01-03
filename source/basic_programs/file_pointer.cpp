#include <iostream>
#include <fstream>

using namespace std;

ofstream* outFile; // This pointer needs to be properly initialized.

float a = 4.33f, b = 5.302f;

int main() {
    outFile = new ofstream; // Allocate memory for the ofstream object

    outFile->open("/Users/govind/C-Practice/source/basic_programs/output_pointer.txt");

    if (outFile->fail()) {
        cout << "Unable to open file" << endl;
        exit(1);
    } else {
        (*outFile) << "a = " << a << endl;
        (*outFile) << "b = " << b << endl;
        (*outFile) << "a + b = " << a + b << endl;
        (*outFile) << "a * b = " << a * b << endl;

        outFile->close();
        cout << "File written successfully !" << endl;
    }

    delete outFile; // Deallocate the memory

    return 0;
}
