// Que 62 : "Write a C++ program that reads an positive integer and count the number of digits"


#include <iostream>

using namespace std;


int main(){

    int number;
    int count = 0;

    cout << "Enter a positive integer : ";
    cin >> number;

    if (number == 0){
        cout << "Number of digits: 1";
        return 0;
    }

    while (number > 0){
        count++;
        number = number / 10;
    }

    cout << "Number of digits : " << count ;
    return 0;
}


// PS D:\tmp\cpp_website\05-Basic_Programming_Constructs_113> cd "d:\tmp\cpp_website\05-Basic_Programming_Constructs_113\" ; if ($?) { g++ que62.cpp -o que62 } ; if ($?) { .\que62 }
// Enter a positive integer : 45666
// Number of digits : 5