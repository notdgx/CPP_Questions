// Que 84 : "Write a C++ program to find factorial using loop"


#include <iostream>

using namespace std;


int main(){

    int n;
    int factorial = 1;

    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++){
        factorial *= i;
    }

    cout << "Factorial is : " << factorial ;
    return 0;
}


// PS D:\tmp\cpp_website\05-Basic_Programming_Constructs_113> cd "d:\tmp\cpp_website\05-Basic_Programming_Constructs_113\" ; if ($?) { g++ que42.cpp -o que42 } ; if ($?) { .\que42 }
// Enter a number: 7
// Factorial is : 5040