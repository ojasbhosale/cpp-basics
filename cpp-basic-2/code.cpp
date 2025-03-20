#include <iostream>
using namespace std;


void vote() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18) {
        cout << "You are eligible to vote." << endl;
    } else {
        cout << "You are not eligible to vote." << endl;
    }
}

void evenOdd() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num % 2 == 0) {
        cout << num << " is an even number." << endl;
    } else {
        cout << num << " is an odd number." << endl;
    }
}

void checkCase() {

    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= 65 && ch <= 90) {
        cout << ch << " is an uppercase letter." << endl;
    }
    else if (ch >= 97 && ch <= 122) {
        cout << ch << " is a lowercase letter." << endl;
    }
    else {
        cout << ch << " is not a letter." << endl;
    }
}


int main() {
    
    int e;

    while (e) {
        int op;
        cout << "Select an option: " << endl;
        cout << "1. Check if you are eligible to vote." << endl;
        cout << "2. Check if a number is even or odd." << endl;
        cout << "3. Check if a character is uppercase or lowercase." << endl;
        cout << "4. Exit" << endl;
        cout << "Enter option: ";
        cin >> op;

        switch (op) {
            case 1:
            vote();
            break;

            case 2:
            evenOdd();
            break;

            case 3:
            checkCase();
            break;

            case 4:
            e = 0;
            break;

            default:
            cout << "Invalid option." << endl;
        }
    }
    return 0;
}