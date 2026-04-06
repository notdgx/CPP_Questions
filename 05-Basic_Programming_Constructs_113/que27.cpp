// Que 27 : "C++ Program to find area of triangle"


#include <iostream>

using namespace std;


int main(){

    int base;
    int height;

    cout << "Enter base and height: ";
    cin >> base >> height;
    cout << "Area of triangle is : " << (base * height) / 2;
    return 0;
}


// PS D:\tmp\cpp_website\05-Basic_Programming_Constructs_113> cd "d:\tmp\cpp_website\05-Basic_Programming_Constructs_113\" ; if ($?) { g++ que27.cpp -o que27 } ; if ($?) { .\que27 }
// Enter base and height: 7
// 7
// Area of triangle is : 24