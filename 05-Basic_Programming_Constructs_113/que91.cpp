// Que 91 : "Write a C++ program to print Armstrong numbers"


#include <iostream>

using namespace std;


int main(){

    int limit;

    cout << "Enter limit : ";
    cin >> limit;

    cout << "Armstrong numbers are : \n";

    for (int number = 1; number <= limit; number++){
        int temp = number;
        int digits = 0;

        while (temp > 0){
            digits++;
            temp = temp / 10;
        }

        if (number == 0){
            digits = 1;
        }

        temp = number;
        int sum = 0;

        while (temp > 0){
            int digit = temp % 10;
            int power = 1;

            for (int i = 1; i <= digits; i++){
                power *= digit;
            }

            sum += power;
            temp = temp / 10;
        }

        if (number == 0){
            sum = 0;
        }

        if (sum == number){
            cout << number << " ";
        }
    }

    return 0;
}


// PS D:\tmp\cpp_website\05-Basic_Programming_Constructs_113> cd "d:\tmp\cpp_website\05-Basic_Programming_Constructs_113\" ; if ($?) { g++ que91.cpp -o que91 } ; if ($?) { .\que91 }
// Enter limit : 32323
// Armstrong numbers are : 
// 1 2 3 4 5 6 7 8 9 153 370 371 407 1634 8208 9474 