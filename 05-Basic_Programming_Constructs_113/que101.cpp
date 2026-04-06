// Que 101 : "Write a C++ method to find area of pentagon"


#include <iostream>

using namespace std;

int main(){

    int side;
    int apothem;

    cout << "Enter side and apothem: ";
    cin >> side >> apothem;
    cout << "Area of pentagon is: " << (5 * side * apothem) / 2;
    return 0;
}


// PS D:\tmp\cpp_website\05-Basic_Programming_Constructs_113> cd "d:\tmp\cpp_website\05-Basic_Programming_Constructs_113\" ; if ($?) { g++ que101.cpp -o que101 } ; if ($?) { .\que101 }
// Enter side and apothem: 5
// 6
// Area of pentagon is: 75