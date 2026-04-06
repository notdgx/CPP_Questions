// Que 50 : "Write a C++ program to take three numbers from the user and print the greatest number"


#include <iostream>

using namespace std;


int main(){

    int a;
    int b;
    int c;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    int greatest = a;

    if (b > greatest){
        greatest = b;
    }

    if (c > greatest){
        greatest = c;
    }

    cout << "Greatest number is : " << greatest ;
    return 0;
}


// PS D:\tmp\cpp_website\05-Basic_Programming_Constructs_113> cd "d:\tmp\cpp_website\05-Basic_Programming_Constructs_113\" ; if ($?) { g++ que50.cpp -o que50 } ; if ($?) { .\que50 }
// Enter three numbers: 6
// 78
// 9
// Greatest number is : 78