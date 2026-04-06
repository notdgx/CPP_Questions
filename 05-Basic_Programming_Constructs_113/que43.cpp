// Que 43 : "C++ Program to calculate electricity bill"


#include <iostream>

using namespace std;


int main(){

    int units;

    cout << "Enter electricity units: ";
    cin >> units;

    cout << "Electricity bill is : " << units * 5 ;
    return 0;
}


// PS D:\tmp\cpp_website\05-Basic_Programming_Constructs_113> cd "d:\tmp\cpp_website\05-Basic_Programming_Constructs_113\" ; if ($?) { g++ que43.cpp -o que43 } ; if ($?) { .\que43 }
// Enter electricity units: 100
// Electricity bill is : 500