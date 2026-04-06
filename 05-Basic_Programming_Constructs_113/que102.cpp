// Que 102 : "Write a C++ method to check even number"


#include <iostream>

using namespace std;



int main(){

    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number % 2 == 0){
        cout << "Even ";
    }

    else{
        cout << "Odd ";
    }

    return 0;
}


// PS D:\tmp\cpp_website\05-Basic_Programming_Constructs_113> cd "d:\tmp\cpp_website\05-Basic_Programming_Constructs_113\" ; if ($?) { g++ que102.cpp -o que102 } ; if ($?) { .\que102 }
// Enter a number: 45
// Odd 