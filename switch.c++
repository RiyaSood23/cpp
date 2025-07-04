// calculator
#include <iostream>
using namespace std;
int main() {
    float a, b;
    char op;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Enter operator  ";
    cin >> op;

    switch (op) {
        case '+':
            cout << "a+b = " << a + b << endl;
            break;
        case '-':
            cout << "a-b = " << a - b << endl;
            break;
        case '*':
            cout << "a*b = " << a * b << endl;
            break;
        case '/':
            if (b != 0) {
                cout << "a/b = " << a/b << endl;
            } else {
                cout << "Error: Division by zero!" << endl;
            }
            break;
        default:
            cout << "Error: Invalid operator!" << endl;
    }

    return 0;
}