// Que 29 : "C++ Program to find area of rhombus"


#include <iostream>

using namespace std;


int main(){

    int diagonal1;
    int diagonal2;

    cout << "Enter diagonals : ";
    cin >> diagonal1 >> diagonal2;
    cout << "Area : " <<(diagonal1 * diagonal2) / 2;
    return 0;
}


// PS D:\tmp\cpp_website> cd "d:\tmp\cpp_website\05-Basic_Programming_Constructs_113\" ; if ($?) { g++ que29.cpp -o que29 } ; if ($?) { .\que29 }
// Enter diagonals : 8
// 8
// Area : 32