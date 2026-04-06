// Que 37 : "C++ program to find surface area of cylinder"


#include <iostream>

using namespace std;


int main(){

    int radius;
    int height;

    cout << "Enter radius and height: ";
    cin >> radius >> height;
    cout << "Surface area : " << (2 * 22 * radius * (radius + height)) / 7;
    return 0;
}


// PS D:\tmp\cpp_website\05-Basic_Programming_Constructs_113> cd "d:\tmp\cpp_website\05-Basic_Programming_Constructs_113\" ; if ($?) { g++ que37.cpp -o que37 } ; if ($?) { .\que37 }
// Enter radius and height: 6
// 7
// Surface area : 490