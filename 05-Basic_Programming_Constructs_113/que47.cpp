// Que 47 : "C++ Program to Calculate Commission Percentage"


#include <iostream>

using namespace std;


int main(){

    int sales;
    int commission;

    cout << "Enter total sales amount: ";
    cin >> sales;

    cout << "Commission : " << (sales * 5) / 100;
    return 0;
}


// PS D:\tmp\cpp_website\05-Basic_Programming_Constructs_113> cd "d:\tmp\cpp_website\05-Basic_Programming_Constructs_113\" ; if ($?) { g++ que47.cpp -o que47 } ; if ($?) { .\que47 }
// Enter total sales amount: 600000
// Commission : 30000