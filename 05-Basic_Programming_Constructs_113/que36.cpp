// Que 36 : "C++ program to find surface area of cuboid"


#include <iostream>

using namespace std;


int main(){

    int length;
    int breadth;
    int height;

    cout << "Enter length, breadth and height: ";
    cin >> length >> breadth >> height;
    cout << "Surface area : " <<  2* (length * breadth + breadth * height + length * height);
    return 0;
}


// PS D:\tmp\cpp_website\05-Basic_Programming_Constructs_113> cd "d:\tmp\cpp_website\05-Basic_Programming_Constructs_113\" ; if ($?) { g++ que36.cpp -o que36 } ; if ($?) { .\que36 }
// Enter length, breadth and height: 7
// 7
// 7
// Surface area : 294