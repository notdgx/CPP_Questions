// Que 90 : "Write a C++ program to find largest and smallest numbers"


#include <iostream>

using namespace std;


int main(){

    int n;

    cout << "Enter count of numbers: ";
    cin >> n;

    int value;
    cin >> value;

    int largest = value;
    int smallest = value;

    for (int i = 2; i <= n; i++){
        cin >> value;

        if (value > largest){
            largest = value;
        }

        if (value < smallest){
            smallest = value;
        }
    }

    cout << "Largest number: " << largest << "\n";
    cout << "Smallest number: " << smallest ;
    return 0;
}


// PS D:\tmp\cpp_website\05-Basic_Programming_Constructs_113> cd "d:\tmp\cpp_website\05-Basic_Programming_Constructs_113\" ; if ($?) { g++ que90.cpp -o que90 } ; if ($?) { .\que90 } 
// Enter count of numbers: 8
// 5
// 5
// 5
// 545
// 55
// 89
// 76
// 54
// Largest number: 545
// Smallest number: 5