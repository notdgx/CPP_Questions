// Que 34 : "C++ Program to find volume of cuboid"


#include <iostream>

using namespace std;


int main(){

    int length;
    int breadth;
    int height;

    cout << "Enter length, breadth and height: ";
    cin >> length >> breadth >> height;
    cout << "Volume of cuboid is: " << length * breadth * height;
    return 0;
}


// PS D:\tmp\cpp_website\05-Basic_Programming_Constructs_113> cd "d:\tmp\cpp_website\05-Basic_Programming_Constructs_113\" ; if ($?) { g++ que34.cpp -o que34 } ; if ($?) { .\que34 }
// Enter length, breadth and height: 5
// 6
// 6
// Volume of cuboid is: 180