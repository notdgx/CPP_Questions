// Que 106 : "Write a C++ method to find factorial using recursion"


#include <iostream>

using namespace std;


int factorial(int n){

    if (n == 0 || n == 1){
        return 1;
    }

    return n * factorial(n - 1);
}


int main(){

    int n;

    cout << "Enter a number: ";
    cin >> n;

    cout << "Factorial is: " << factorial(n) ;
    return 0;
}


// PS D:\tmp\cpp_website\05-Basic_Programming_Constructs_113> cd "d:\tmp\cpp_website\05-Basic_Programming_Constructs_113\" ; if ($?) { g++ que106.cpp -o que106 } ; if ($?) { .\que106 }
// Enter a number: 5
// Factorial is: 120