// Que 86 : "Write a C++ program to sum even and odd integers"


#include <iostream>

using namespace std;


int main(){

    int n;
    int evenSum = 0;
    int oddSum = 0;

    cout << "Enter value of n: ";
    cin >> n;

    for (int i = 1; i <= n; i++){
        if (i % 2 == 0){
            evenSum += i;
        }

        else{
            oddSum += i;
        }
    }

    cout << "Sum of even : " << evenSum << "\n";
    cout << "Sum of odd : " << oddSum ;
    return 0;
}


// PS D:\tmp\cpp_website\05-Basic_Programming_Constructs_113> cd "d:\tmp\cpp_website\05-Basic_Programming_Constructs_113\" ; if ($?) { g++ que86.cpp -o que86 } ; if ($?) { .\que86 }
// Enter value of n: 89
// Sum of even : 1980
// Sum of odd : 2025