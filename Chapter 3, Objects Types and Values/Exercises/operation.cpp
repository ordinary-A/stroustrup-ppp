#include "std_lib_facilities.h"

int main()
{
    char operation;
    double operand1, operand2;
    cout << "enter an operation followed by two operands: ";
    cin >> operation >> operand1 >> operand2;

    if (operation == '+') {
        cout << operand1 << " + " << operand2 << " = " << operand1 + operand2 << endl;
    } else if (operation == '-') {
        cout << operand1 << " - " << operand2 << " = " << operand1 - operand2 << endl;
    } else if (operation == '*') {
        cout << operand1 << " * " << operand2 << " = " << operand1 * operand2 << endl;
    } else if (operation == '/') {
        if (operand2 != 0) {
            cout << operand1 << " / " << operand2 << " = " << operand1 / operand2 << endl;
        } else {
            cout << "Error: Division by zero is not allowed." << endl;
        }
    } else {
        cout << "Error: Unknown operation '" << operation << "'." << endl;
    }

}