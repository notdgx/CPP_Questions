// Que 110 : "Write a C++ program to round division result"


#include <iostream>

using namespace std;


int main(){

    int b;
    int c;

    cout << "Enter b and c: ";
    cin >> b >> c;

    int a = b / c;
    int remainder = b % c;

    if (remainder * 2 >= c){
        a++;
    }

    cout << "Rounded division : " << a ;
    return 0;
}


// PS D:\tmp\cpp_website\05-Basic_Programming_Constructs_113> cd "d:\tmp\cpp_website\05-Basic_Programming_Constructs_113\" ; if ($?) { g++ que110.cpp -o que110 } ; if ($?) { .\que110 }
// Enter b and c: 344
// 7
// Rounded division : 49