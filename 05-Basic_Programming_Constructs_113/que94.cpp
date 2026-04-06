// Que 94 : "Write a C++ program to calculate series sum"


#include <iostream>

using namespace std;


int main(){

    int n;
    int sum = 0;

    cout << "Enter n: ";
    cin >> n;

    for (int i = 1; i <= n; i++){
        sum += i;
    }

    cout << "sum : " << sum ;
    return 0;
}


// PS D:\tmp\cpp_website\05-Basic_Programming_Constructs_113> cd "d:\tmp\cpp_website\05-Basic_Programming_Constructs_113\" ; if ($?) { g++ que94.cpp -o que94 } ; if ($?) { .\que94 }
// Enter n: 10
// sum : 55