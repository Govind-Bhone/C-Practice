#include<iostream>

using namespace std;


float operand_1, operand_2, result;
char operation;

int main(){
    cout << "Enter operand 1 :" << endl;
    cin >> operand_1;
    cout << "Enter operand 2 :" << endl;
    cin >> operand_2;
    cout << "Enter operation :" << endl;
    cin >> operation;

    switch (operation)
    {
    case '+':
        result = operand_1 + operand_2;
        break;
    case '-':
        result = operand_1 - operand_2;
        break;
    case '*':
        result = operand_1 * operand_2;
        break;
    case '/':
        result = operand_1/operand_2;
        break;
    default:
        break;
    }

    cout << "The result is " <<result << endl;
    return 0;
}