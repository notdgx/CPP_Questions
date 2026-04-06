// Que 89 : "Write a C++ program to count positives, negatives and zeros"


#include <iostream>

using namespace std;


int main(){

    int n;
    int value;
    int positives = 0;
    int negatives = 0;
    int zeros = 0;

    cout << "Enter count of numbers: ";
    cin >> n;

    for (int i = 1; i <= n; i++){
        cin >> value;

        if (value > 0){
            positives++;
        }

        else if (value < 0){
            negatives++;
        }

        else{
            zeros++;
        }
    }

    cout << "Positives: " << positives << "\n";
    cout << "Negatives: " << negatives << "\n";
    cout << "Zeros: " << zeros ;
    return 0;
}


// PS D:\tmp\cpp_website\05-Basic_Programming_Constructs_113> cd "d:\tmp\cpp_website\05-Basic_Programming_Constructs_113\" ; if ($?) { g++ que89.cpp -o que89 } ; if ($?) { .\que89 }
// Enter count of numbers: 10
// 3
// 4
// -4
// -4
// -6
// 0
// 0
// 0
// 0
// 2
// Positives: 3
// Negatives: 3
// Zeros: 4