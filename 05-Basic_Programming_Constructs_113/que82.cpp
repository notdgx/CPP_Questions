// Que 82 : "Write a C++ program to calculate sum of first 10 natural numbers"


#include <iostream>

using namespace std;


int main(){

    int sum = 0;

    for (int i = 1; i <= 10; i++){
        sum += i;
    }

    cout << "Sum : " << sum ;
    return 0;
}


// PS D:\tmp\cpp_website\05-Basic_Programming_Constructs_113> cd "d:\tmp\cpp_website\05-Basic_Programming_Constructs_113\" ; if ($?) { g++ que82.cpp -o que82 } ; if ($?) { .\que82 }
// Sum : 55