// Que 41 : "C++ program to sum of N numbers"


#include <iostream>

using namespace std;


int main(){

    int n;
    int number;
    int sum = 0;

    cout << "Enter count of numbers : ";
    cin >> n;

    for (int i = 1; i <= n; i++){
        cout << "Enter number " << i << ": ";
        cin >> number;
        sum += number;
    }

    cout << "Sum is :  " << sum ;
    return 0;
}


// PS D:\tmp\cpp_website\05-Basic_Programming_Constructs_113> cd "d:\tmp\cpp_website\05-Basic_Programming_Constructs_113\" ; if ($?) { g++ que41.cpp -o que41 } ; if ($?) { .\que41 }
// Enter count of numbers : 6
// Enter number 1: 34
// Enter number 2: 43
// Enter number 3: 5
// Enter number 4: 46
// Enter number 5: 88
// Enter number 6: 99
// Sum is :  315