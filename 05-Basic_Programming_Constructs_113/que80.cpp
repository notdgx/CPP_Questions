// Que 80 : "Write a C++ Program to Accept Marks and find Total and Percentage"


#include <iostream>

using namespace std;


int main(){

    int m1;
    int m2;
    int m3;
    int m4;
    int m5;

    cout << "Enter marks of 5 subjects : ";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;

    int total = m1 + m2 + m3 + m4 + m5;
    cout << "Total marks: " << total << "\n";
    cout << "Percentage: " << total / 5 << "%";
    return 0;
}


// PS D:\tmp\cpp_website\05-Basic_Programming_Constructs_113> cd "d:\tmp\cpp_website\05-Basic_Programming_Constructs_113\" ; if ($?) { g++ que80.cpp -o que80 } ; if ($?) { .\que80 }
// Enter marks of 5 subjects : 6
// 6
// 6
// 6
// 6
// Total marks: 30
// Percentage: 6%