// Que 45 : "C++ Program to calculate compound interest"


#include <iostream>

using namespace std;


int main(){

    int principal;
    int rate;
    int time;
    int amount;

    cout << "Enter principal amount: ";
    cin >> principal;

    cout << "Enter rate : ";
    cin >> rate;

    cout << "Enter time : ";
    cin >> time;

    amount = principal;
    for (int i = 0; i < time; i++){
        amount = amount + (amount * rate) / 100;
    }

    int ci = amount - principal;
    cout << "Compound interest is : " << ci << "\n";
    cout << "Total amount is : " << amount ;
    return 0;
}


// PS D:\tmp\cpp_website\05-Basic_Programming_Constructs_113> cd "d:\tmp\cpp_website\05-Basic_Programming_Constructs_113\" ; if ($?) { g++ que45.cpp -o que45 } ; if ($?) { .\que45 }
// Enter principal amount: 6000
// Enter rate : 5
// Enter time : 5
// Compound interest is : 1656
// Total amount is : 7656