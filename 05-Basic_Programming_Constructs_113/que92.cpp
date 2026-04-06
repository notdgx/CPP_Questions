// Que 92 : "Write a C++ program to count notes in amount"


#include <iostream>

using namespace std;


int main(){

    int amount;

    cout << "Enter amount: ";
    cin >> amount;

    if (amount < 0){
        cout << "Invalid amount\n";
        return 0;
    }

    int note500 = amount / 500;
    amount = amount % 500;

    int note200 = amount / 200;
    amount = amount % 200;

    int note100 = amount / 100;
    amount = amount % 100;

    int note50 = amount / 50;
    amount = amount % 50;

    int note20 = amount / 20;
    amount = amount % 20;

    int note10 = amount / 10;
    amount = amount % 10;

    int note5 = amount / 5;
    amount = amount % 5;

    int note2 = amount / 2;
    amount = amount % 2;

    int note1 = amount;

    cout << "500: " << note500 << "\n";
    cout << "200: " << note200 << "\n";
    cout << "100: " << note100 << "\n";
    cout << "50: " << note50 << "\n";
    cout << "20: " << note20 << "\n";
    cout << "10: " << note10 << "\n";
    cout << "5: " << note5 << "\n";
    cout << "2: " << note2 << "\n";
    cout << "1: " << note1 ;
    return 0;
}


// S D:\tmp\cpp_website\05-Basic_Programming_Constructs_113> cd "d:\tmp\cpp_website\05-Basic_Programming_Constructs_113\" ; if ($?) { g++ que92.cpp -o que92 } ; if ($?) { .\que92 }
// Enter amount: 45464
// 500: 90
// 200: 2
// 100: 0
// 50: 1
// 20: 0
// 10: 1
// 5: 0
// 2: 2
// 1: 0