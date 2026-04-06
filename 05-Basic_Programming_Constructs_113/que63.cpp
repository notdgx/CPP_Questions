// Que 63 : "Write a C++ program that accepts three numbers and check All numbers are equal or not"


#include <iostream>

using namespace std;


int main(){

    int a;
    int b;
    int c;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if (a == b && b == c){
        cout << "equal";
    }

    else{
        cout << "not equal";
    }

    return 0;
}


// PS D:\tmp\cpp_website\05-Basic_Programming_Constructs_113> cd "d:\tmp\cpp_website\05-Basic_Programming_Constructs_113\" ; if ($?) { g++ que63.cpp -o que63 } ; if ($?) { .\que63 }
// Enter three numbers: 5
// 5
// 5
//  equal