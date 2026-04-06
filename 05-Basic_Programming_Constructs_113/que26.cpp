// Que 26 : "C++ Program to find area of rectangle"


#include <iostream>

using namespace std;


int main(){

    int length;
    int breadth;

    cout << "Enter length and breadth: ";
    cin >> length >> breadth;
    cout << "Area of rectangle is: " << length * breadth;
    return 0;
}


// PS D:\tmp\cpp_website\05-Basic_Programming_Constructs_113> cd "d:\tmp\cpp_website\05-Basic_Programming_Constructs_113\" ; if ($?) { g++ que26.cpp -o que26 } ; if ($?) { .\que26 }
// Enter length and breadth: 4
// 5
// Area of rectangle is: 20