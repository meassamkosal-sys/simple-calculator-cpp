
#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;
    int choice;
do {
    cout << "Enter first number:";
    cin >> num1;

    cout << "Enter second numbers: ";
    cin >> num2;

    cout << "Enter the operation (+, -, *, /): ";
    cin >> op;

    switch (op) { // Operation selection
        case '+':
            cout << "Result: " << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;

        case '-':
            cout << "Result: " << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;

        case '*':
            cout << "Result: " << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;

        case '/': //Check for division by zero
            if (num2 == 0.0) {
                cout << "Cannot divide by zero" << endl;
            } else {
                cout << "Result: "<< num1 << " / " << num2 << " = " << num1 / num2 << endl;
            }
            break;

        default:
            cout << "Invalid operator" << endl;
    }

    cout << "\n1. Calculate again" << endl;
    cout << "2. Exit" << endl;
    cout << "Please enter your choice: ";
    cin >> choice;
    }while (choice ==1); //loop until user chooses to exit

    cout << "Good bye" << endl;

    return 0;
}
