// Que 33 : "C++ Program to find volume of cylinder"


#include <iostream>

using namespace std;


int main(){

    int radius;
    int height;

    cout << "Enter radius and height: ";
    cin >> radius >> height;
    cout << "Volume : " << (22 * radius * radius * height) / 7;
    return 0;
}


// PS D:\tmp\cpp_website\05-Basic_Programming_Constructs_113> cd "d:\tmp\cpp_website\05-Basic_Programming_Constructs_113\" ; if ($?) { g++ que33.cpp -o que33 } ; if ($?) { .\que33 }
// Enter radius and height: 6
// 7
// Volume : 792