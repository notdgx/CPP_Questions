// Que 32 : "C++ Program to find volume of sphere"


#include <iostream>

using namespace std;


int main(){

    int radius;

    cout << "Enter radius: ";
    cin >> radius;

    cout << "Volume : " << (4 * 22 * radius * radius * radius) / (3 * 7);
    return 0;
}


// PS D:\tmp\cpp_website\05-Basic_Programming_Constructs_113> cd "d:\tmp\cpp_website\05-Basic_Programming_Constructs_113\" ; if ($?) { g++ que32.cpp -o que32 } ; if ($?) { .\que32 }
// Enter radius: 7
// Volume : 1437