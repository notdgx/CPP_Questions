// Que 21 : "Write a C++ program to compute the square root of an given integer"


#include <iostream>

using namespace std;


int main(){

    int number;

    cout << "Enter an integer: ";
    cin >> number;

    if (number < 0){
        cout << "Enter a +ve no ";
        return 0;
    }

    int root = 0;
    while ((root + 1) * (root + 1) <= number){
        root++;
    }

    cout << "Square root is : " << root ;
    return 0;
}


// S D:\tmp\cpp_website\05-Basic_Programming_Constructs_113> cd "d:\tmp\cpp_website\05-Basic_Programming_Constructs_113\" ; if ($?) { g++ que21.cpp -o que21 } ; if ($?) { .\que21 }
// Enter an integer: 216
// Square root is : 14