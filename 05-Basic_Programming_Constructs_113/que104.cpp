// Que 104 : "Write a C++ method to display prime numbers"

#include <iostream>
using namespace std;

int main(){

    int limit;

    cout << "Enter limit: ";
    cin >> limit;

    if (limit < 2){
        cout << "No prime numbers";
        return 0;
    }

    cout << "Prime numbers are :\n";

    for (int i = 2; i <= limit; i++){

        bool isPrime = true;  

        for (int j = 2; j * j <= i; j++){
            if (i % j == 0){
                isPrime = false;
                break;
            }
        }

        if (isPrime){
            cout << i << " ";
        }
    }

    return 0;
}

// PS D:\tmp\cpp_website\05-Basic_Programming_Constructs_113> cd "d:\tmp\cpp_website\05-Basic_Programming_Constructs_113\" ; if ($?) { g++ que104.cpp -o que104 } ; if ($?) { .\que104 }
// Enter limit: 100
// Prime numbers are :
// 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97 