// Que 87 : "Write a C++ program to check prime number"


#include <iostream>

using namespace std;


int main(){

    int number;
    int prime = 1;

    cout << "Enter a number: ";
    cin >> number;

    if (number < 2){
        cout << "Not prime";
        return 0;
    }

    for (int i = 2; i * i <= number; i++){
        if (number % i == 0){
            prime = 0;
            break;
        }
    }

    if (prime == 1){
        cout << "Prime number";
    }

    if (prime == 0){
        cout << "Not prime";
    }

    return 0;
}


// PS D:\tmp\cpp_website\05-Basic_Programming_Constructs_113> cd "d:\tmp\cpp_website\05-Basic_Programming_Constructs_113\" ; if ($?) { g++ que87.cpp -o que87 } ; if ($?) { .\que87 }
// Enter a number: 61
// Prime number