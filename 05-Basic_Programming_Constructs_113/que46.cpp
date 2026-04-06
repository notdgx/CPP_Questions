// Que 46 : "C++ Program To Calculate Batting Average"


#include <iostream>

using namespace std;


int main(){

    int runs;
    int innings;
    int notOut;

    cout << "Enter total runs: ";
    cin >> runs;

    cout << "Enter total innings: ";
    cin >> innings;

    cout << "Enter not out innings: ";
    cin >> notOut;

    int outs = innings - notOut;
    cout << "Batting average is : " << runs / outs;
    return 0;
}


// PS D:\tmp\cpp_website\05-Basic_Programming_Constructs_113> cd "d:\tmp\cpp_website\05-Basic_Programming_Constructs_113\" ; if ($?) { g++ que46.cpp -o que46 } ; if ($?) { .\que46 }
// Enter total runs: 566
// Enter total innings: 6
// Enter not out innings: 2
// Batting average is : 141