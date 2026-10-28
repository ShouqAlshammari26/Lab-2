#include <iostream> 
using namespace std;
int main() {
    double num1, num2; char op;
    cout << "Enter operation (+, -, *, /): ";
    cin >> op;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    if (op == '+')
        cout << "Result = " << num1 + num2;
    else if (op == '-')
        cout << "Result = " << num1 - num2;
    else if (op == '*')
        cout << "Result = " << num1 * num2;
    else if (op == '/') {
        if (num2 != 0)
            cout << "Result = " << num1 / num2;
        else
            cout << "Cannot divide by zero";
    }
    else
        cout << "Wrong operation symbol";

    return 0;
}
