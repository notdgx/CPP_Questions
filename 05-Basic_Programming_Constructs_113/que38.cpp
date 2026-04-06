// Que 38 : "C++ program to find surface area of cube"


#include <iostream>

using namespace std;


int main(){

    int side;

    cout << "Enter side: ";
    cin >> side;

    cout << "Surface area : " << 6 * side * side;
    return 0;
}


// PS D:\tmp\cpp_website\05-Basic_Programming_Constructs_113> cd "d:\tmp\cpp_website\05-Basic_Programming_Constructs_113\" ; if ($?) { g++ que38.cpp -o que38 } ; if ($?) { .\que38 }
// Enter side: 7
// Surface area : 294