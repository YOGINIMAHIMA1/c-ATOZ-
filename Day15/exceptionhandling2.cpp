#include <iostream>
#include <stdexcept>  // Include stdexcept for standard exceptions

using namespace std;

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b == 0) {
        throw runtime_error("Division by zero is not allowed.");
    }
    // Simulate an unexpected exception
    throw logic_error("Unexpected logic error.");
    return a / b;
}

int main() {
    double num1, num2, result;
    char op;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;

    try {
        switch (op) {
            case '+':
                result = add(num1, num2);
                break;
            case '-':
                result = subtract(num1, num2);
                break;
            case '*':
                result = multiply(num1, num2);
                break;
            case '/':
                result = divide(num1, num2);
                break;
            default:
                throw invalid_argument("Invalid operator.");
        }
        cout << "Result: " << result << endl;
    } 
    catch (const invalid_argument& e) {
        cerr << "Error: " << e.what() << endl;
    } 
    catch (const runtime_error& e) {
        cerr << "Error: " << e.what() << endl;
    } 
    catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}
