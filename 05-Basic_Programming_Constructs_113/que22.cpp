// Que 22 : "Write a C++ program to check if a positive number is a palindrome or not"


#include <iostream>

using namespace std;


int main(){

    int number;

    cout << "Enter a positive number: ";
    cin >> number;

    int original = number;
    int reverse = 0;

    while (number > 0){
        reverse = reverse * 10 + (number % 10);
        number = number / 10;
    }

    if (original == reverse){
        cout << "Palindrome ";
    }

    if (original != reverse){
        cout << "Not palindrome ";
    }

    return 0;
}


// PS D:\tmp\cpp_website\05-Basic_Programming_Constructs_113> cd "d:\tmp\cpp_website\05-Basic_Programming_Constructs_113\" ; if ($?) { g++ que22.cpp -o que22 } ; if ($?) { .\que22 }
// Enter a positive number: 1221
// Palindrome 