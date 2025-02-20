#include <iostream>
using namespace std;

int main() {
    char operation;
    double num1, num2;

    cout << "Enter an operation (+, -, *, /): ";
    cin >> operation;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch (operation) {
        case '+':
            cout << "Result: " << num1 + num2 << "\n";
            break;
        case '-':
            cout << "Result: " << num1 - num2 << "\n";
            break;
        case '*':
            cout << "Result: " << num1 * num2 << "\n";
            break;
        case '/':
            if (num2 != 0) {
                cout << "Result: " << num1 / num2 << "\n";
            } else {
                cout << "Error: Division by zero is impossible!\n";
            }
            break;
        default:
            cout << "Invalid operation!\n";
    }

    return 0;
}