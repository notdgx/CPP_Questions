// Que 49 : "C++ Program To Calculate Power Of Number"


#include <iostream>

using namespace std;


int main(){

    int base;
    int exponent;
    int result = 1;

    cout << "Enter base and exponent : ";
    cin >> base >> exponent;

    for (int i = 1; i <= exponent; i++){
        result *= base;
    }
    cout << "Power is : " << result ;
    return 0;
}


// PS D:\tmp\cpp_website\05-Basic_Programming_Constructs_113> cd "d:\tmp\cpp_website\05-Basic_Programming_Constructs_113\" ; if ($?) { g++ que49.cpp -o que49 } ; if ($?) { .\que49 }
// Enter base and exponent : 7

// 3
// Power is : 343