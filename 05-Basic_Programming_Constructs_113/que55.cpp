// Que 55 : "Write a C++ program to input 5 numbers from keyboard and find their sum and average"


#include <iostream>

using namespace std;


int main(){

    int a;
    int b;
    int c;
    int d;
    int e;

    cout << "Enter 5 numbers: ";
    cin >> a >> b >> c >> d >> e;

    int sum = a + b + c + d + e;
    cout << "Sum : " << sum << "\n";
    cout << "Average : " << sum /5  ;
    return 0;
}


// PS D:\tmp\cpp_website\05-Basic_Programming_Constructs_113> cd "d:\tmp\cpp_website\05-Basic_Programming_Constructs_113\" ; if ($?) { g++ que55.cpp -o que55 } ; if ($?) { .\que55 }
// Enter 5 numbers: 6
// 6
// 6
// 6
// 6
// Sum : 30
// Average : 6