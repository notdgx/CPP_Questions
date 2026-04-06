// Que 61 : "Write a C++ program that reads an integer and check whether it is negative, zero, or positive"


#include <iostream>

using namespace std;


int main(){

    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number > 0){
        cout << "Positive number";
    }

    else if (number < 0){
        cout << "Negative number";
    }

    else{
        cout << "Zero";
    }

    return 0;
}


// PS D:\tmp\cpp_website\05-Basic_Programming_Constructs_113> cd "d:\tmp\cpp_website\05-Basic_Programming_Constructs_113\" ; if ($?) { g++ que52.cpp -o que52 } ; if ($?) { .\que52 }
// Enter a number: -23
// Negative number