// Que 20 : "Write a C++ program to compute the sum of the first 100 prime numbers"


#include <iostream>

using namespace std;


int main(){

    int count = 0;
    int number = 2;
    int sum = 0;

    while (count < 100){
        int prime = 1;

        for (int i = 2; i * i <= number; i++){
            if (number % i == 0){
                prime = 0;
                break;
            }
        }

        if (prime == 1){
            sum += number;
            count++;
        }

        number++;
    }

    cout << "Sum : " << sum ;
    return 0;
}


// PS D:\tmp\cpp_website\05-Basic_Programming_Constructs_113> cd "d:\tmp\cpp_website\05-Basic_Programming_Constructs_113\" ; if ($?) { g++ que20.cpp -o que20 } ; if ($?) { .\que20 }
// Sum : 24133