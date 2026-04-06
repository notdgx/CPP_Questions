// Que 56 : "Write a program in C++ to display the first 5 natural numbers"


#include <iostream>

using namespace std;


int main(){

    cout << "First 5 natural numbers are :\n";
    for (int i = 1; i <= 5; i++){
        cout << i << " ";
    }

    return 0;
}


// PS D:\tmp\cpp_website\05-Basic_Programming_Constructs_113> cd "d:\tmp\cpp_website\05-Basic_Programming_Constructs_113\" ; if ($?) { g++ que56.cpp -o que56 } ; if ($?) { .\que56 }
// First 5 natural numbers are :
// 1 2 3 4 5 