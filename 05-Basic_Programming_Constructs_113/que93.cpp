// Que 93 : "Write a C++ program to print Fibonacci series"


#include <iostream>

using namespace std;


int main(){

    int n;

    cout << "Enter number of terms: ";
    cin >> n;

    int first = 0;
    int second = 1;

    for (int i = 1; i <= n; i++){
        if (i == 1){
            cout << first << " ";
        }

        else if (i == 2){
            cout << second << " ";
        }

        else{
            int next = first + second;
            cout << next << " ";
            first = second;
            second = next;
        }
    }

    return 0;
}


// PS D:\tmp\cpp_website\05-Basic_Programming_Constructs_113> cd "d:\tmp\cpp_website\05-Basic_Programming_Constructs_113\" ; if ($?) { g++ que93.cpp -o que93 } ; if ($?) { .\que93 }
// Enter number of terms: 20
// 0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987 1597 2584 4181 