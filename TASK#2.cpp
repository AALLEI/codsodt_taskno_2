#include <iostream>
using namespace std;

void operations(int num1, int num2, char choice) {                            // Functions perform Arithmetic operations
    if (choice == '+') {
        cout << "YOUR NUMBERS AFTER ADDITION IS : ";
        cout << num1 + num2;
    }
    else if (choice == '-') {
        cout << "YOUR NUMBERS AFTER SUBTRACTION IS : ";
        cout << num1 - num2;
    }
    else if (choice == '*') {
        cout << "YOUR NUMBERS AFTER MULTIPLICATION IS : ";
        cout << num1 * num2;
    }
    else if (choice == '/') {
        if (num2 != 0) {
            cout << "YOUR NUMBERS AFTER DIVISION IS : ";
            cout << float(num1) / num2;                                             // In case of point values
        }
        else {
            cout << "ERROR: Division by zero is not allowed.";                     // If user enter zero as divider
        }
    }
    else {
        cout << "INVALID OPERATOR" << endl;
    }
}

int main() {
    int num1, num2;
    char choice;

    cout << "Please enter two numbers: ";       // Taking inputs from users
    cin >> num1;
    cout << "Second one, please: ";
    cin >> num2;

    cout << endl;

    cout << "Please choose an operator [+, -, *, /]: ";
    cin >> choice;

    while (true) {
        if (choice == '+' || choice == '-' || choice == '*' || choice == '/') {           //check user enter operators
            operations(num1, num2, choice);
            break;
        }
        else {
            cout << "Please enter a valid operator: ";
            cin >> choice;
        }
    }

    return 0;
}
