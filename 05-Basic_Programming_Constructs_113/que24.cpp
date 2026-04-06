// Que 24 : "Write a C++ program to add all the digits of a given positive integer"


#include <iostream>

using namespace std;


int main(){

    int number;
    int sum = 0;

    cout << "Enter a positive integer : ";
    cin >> number;

    if (number < 0){
        cout << "Enter positive integer ";
        return 0;
    }

    while (number > 0){
        sum += number % 10;
        number = number / 10;
    }

    cout << "Sum of digits: " << sum ;
    return 0;
}


// PS D:\tmp\cpp_website\05-Basic_Programming_Constructs_113> cd "d:\tmp\cpp_website\05-Basic_Programming_Constructs_113\" ; if ($?) { g++ que24.cpp -o que24 } ; if ($?) { .\que24 }
// Enter a positive integer : 12345
// Sum of digits: 15