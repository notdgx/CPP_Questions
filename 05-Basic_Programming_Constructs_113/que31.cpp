// Que 31 : "C++ Program to find area of Prism"


#include <iostream>

using namespace std;


int main(){

    int baseArea;
    int height;

    cout << "Enter base area and height of prism : ";
    cin >> baseArea >> height;
    cout << "volume : " <<  baseArea * height;
    return 0;
}


// PS D:\tmp\cpp_website\05-Basic_Programming_Constructs_113> cd "d:\tmp\cpp_website\05-Basic_Programming_Constructs_113\" ; if ($?) { g++ que31.cpp -o que31 } ; if ($?) { .\que31 }
// Enter base area and height of prism : 7
// 8
// volume : 56