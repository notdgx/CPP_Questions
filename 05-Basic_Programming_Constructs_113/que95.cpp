// Que 95 : "Write a C++ method to compute average of three numbers"


#include <iostream>

using namespace std;


int main(){

    int a;
    int b;
    int c;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    cout << "Average : " << (a + b + c) / 3;
    return 0;
}


// PS D:\tmp\cpp_website\05-Basic_Programming_Constructs_113> cd "d:\tmp\cpp_website\05-Basic_Programming_Constructs_113\" ; if ($?) { g++ que95.cpp -o que95 } ; if ($?) { .\que95 }
// Enter three numbers: 5
// 5
// 5
// Average : 5