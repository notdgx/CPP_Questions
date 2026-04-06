// Que 59 : "Write a C++ program to display the n terms of odd natural number and their sum"


#include <iostream>

using namespace std;


int main(){

    int n;
    int sum = 0;

    cout << "Enter number of terms : ";
    cin >> n;

    cout << "Odd numbers are : ";
    for (int i = 1; i <= n; i++){
        int odd = 2 * i - 1;
        cout << odd << " ";
        sum += odd;
    }

    cout << "\nSum is: " << sum ;
    return 0;
}

// PS D:\tmp\cpp_website\05-Basic_Programming_Constructs_113> cd "d:\tmp\cpp_website\05-Basic_Programming_Constructs_113\" ; if ($?) { g++ que59.cpp -o que59 } ; if ($?) { .\que59 }
// Enter number of terms : 5
// Odd numbers are : 1 3 5 7 9 
// Sum is: 25