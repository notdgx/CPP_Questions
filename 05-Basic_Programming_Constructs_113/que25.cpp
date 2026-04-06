// Que 25 : "C++ program to find area of circle"


#include <iostream>

using namespace std;


int main(){

    int radius;

    cout << "Enter radius : ";
    cin >> radius;
    cout << "Area of circle is: " << (22 * radius * radius) / 7;
    return 0;
}


// PS D:\tmp\cpp_website\05-Basic_Programming_Constructs_113> cd "d:\tmp\cpp_website\05-Basic_Programming_Constructs_113\" ; if ($?) { g++ que25.cpp -o que25 } ; if ($?) { .\que25 }
// Enter radius : 7
// Area of circle is: 154