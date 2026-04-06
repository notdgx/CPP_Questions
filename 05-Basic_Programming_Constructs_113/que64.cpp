// Que 64 : "Write a C++ program that accepts three numbers from the user and check if numbers are in increasing or decreasing order"


#include <iostream>

using namespace std;


int main(){

    int a;
    int b;
    int c;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if (a < b && b < c){
        cout << "Increasing order";
    }

    else if (a > b && b > c){
        cout << "Decreasing order";
    }

    else{
        cout << "nothing ";
    }

    return 0;
}


// PS D:\tmp\cpp_website\05-Basic_Programming_Constructs_113> cd "d:\tmp\cpp_website\05-Basic_Programming_Constructs_113\" ; if ($?) { g++ que64.cpp -o que64 } ; if ($?) { .\que64 }
// Enter three numbers: 
// 2
// 5
// 9
// Increasing order