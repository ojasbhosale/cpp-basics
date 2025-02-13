#include <iostream>
using namespace std;

int main() {
    
    cout << "Welcome to basic calculator program!" << "\n";
    cout << "Select an operation:" << "\n";

    int e;
    while (e) {
        cout << "1. Addition" << "\n";
        cout << "2. Subtraction" << "\n";
        cout << "3. Multiplication" << "\n";
        cout << "4. Division" << "\n";
        int operation;
        cout << "Enter operation number: ";
        cin >> operation;
        int a, b;
        switch (operation) {
            case 1:
            cout << "Addition" << "\n";
            cout << "Enter two numbers: " << "\n";
            cin >> a >> b;
            cout << "Sum: " << a + b << "\n";
            break;

            case 2:
            cout << "Subtraction" << "\n";
            cout << "Enter two numbers: " << "\n";
            cin >> a >> b;
            cout << "Difference: " << a - b << "\n";
            break;

            case 3:
            cout << "Multiplication" << "\n";
            cout << "Enter two numbers: " << "\n";
            cin >> a >> b;
            cout << "Product: " << a * b << "\n";
            break;

            case 4:
            cout << "Division" << "\n";
            cout << "Enter two numbers: " << "\n";
            cin >> a >> b;
            if (b != 0) {
                cout << "Quotient: " << a/b << "\n";
            } else {
                cout << "Error: Division by zero" << "\n";
            }
            break;

            default:
            cout << "Invalid operation number" << "\n";
            
            
        }
    }

    return 0;
}