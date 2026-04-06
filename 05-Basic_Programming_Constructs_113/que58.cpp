// Que 58 : "Write a C++ program to display the cube of the number upto given an integer"


#include <iostream>

using namespace std;


int main(){

    int n;

    cout << "Enter a number: ";
    cin >> n;
    for (int i = 1; i <= n; i++){
        cout << "Cube of " << i << " is " << i * i * i << "\n";
    }

    return 0;
}


// PS D:\tmp\cpp_website\05-Basic_Programming_Constructs_113> cd "d:\tmp\cpp_website\05-Basic_Programming_Constructs_113\" ; if ($?) { g++ que58.cpp -o que58 } ; if ($?) { .\que58 }
// Enter a number: 5
// Cube of 1 is 1
// Cube of 2 is 8
// Cube of 3 is 27
// Cube of 4 is 64
// Cube of 5 is 125