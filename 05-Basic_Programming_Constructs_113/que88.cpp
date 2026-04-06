// Que 88 : "Write a C++ program to calculate HCF"


#include <iostream>

using namespace std;


int main(){

    int a;
    int b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    if (a < 0){
        a = -a;
    }

    if (b < 0){
        b = -b;
    }

    while (b != 0){
        int rem = a % b;
        a = b;
        b = rem;
    }

    cout << "HCF is: " << a ;
    return 0;
}


// PS D:\tmp\cpp_website\05-Basic_Programming_Constructs_113> cd "d:\tmp\cpp_website\05-Basic_Programming_Constructs_113\" ; if ($?) { g++ que88.cpp -o que88 } ; if ($?) { .\que88 }
// Enter two numbers: 5
// 7
// HCF is: 1