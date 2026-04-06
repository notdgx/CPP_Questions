// Que 96 : "Write a C++ method to find smallest among three numbers"


#include <iostream>

using namespace std;

int main(){

    int a;
    int b;
    int c;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    int s = a;

    if (b < s){
        s = b;
    }

    if (c < s){
        s = c;
    }

    cout << "Smallest : " << s ;
    return 0;
}


// PS D:\tmp\cpp_website\05-Basic_Programming_Constructs_113> cd "d:\tmp\cpp_website\05-Basic_Programming_Constructs_113\" ; if ($?) { g++ que96.cpp -o que96 } ; if ($?) { .\que96 }
// Enter three numbers: 5
// 45
// 77
// Smallest : 5