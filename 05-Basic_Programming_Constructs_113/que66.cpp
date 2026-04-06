// Que 66 : "Write a C++ program to create a simple calculator"

#include <iostream>
using namespace std;

int main() {

    int choice;
    int a, b;

    cout << "Select operation:\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "5. Modulus\n";

    cout << "Enter your choice : ";
    cin >> choice;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    switch(choice) {

        case 1:
            cout << "Result: " << a + b ;
            break;

        case 2:
            cout << "Result: " << a - b ;
            break;

        case 3:
            cout << "Result: " << a * b ;
            break;

        case 4:
            if (b == 0) {
                cout << "Division by zero not possible";
            } else {
                cout << "Result: " << a / b ;
            }
            break;

        case 5:
            if (b == 0) {
                cout << "Division by zero not possible";
            } else {
                cout << "Result: " << a % b ;
            }
            break;

        default:
            cout << "Invalid choice";
    }

    return 0;
}

// S D:\tmp\cpp_website\05-Basic_Programming_Constructs_113> cd "d:\tmp\cpp_website\05-Basic_Programming_Constructs_113\" ; if ($?) { g++ que66.cpp -o que66 } ; if ($?) { .\que66 }
// Select operation:
// 1. Addition
// 2. Subtraction
// 3. Multiplication
// 4. Division
// 5. Modulus
// Enter your choice : 3
// Enter two numbers: 445
// 3
// Result: 1335