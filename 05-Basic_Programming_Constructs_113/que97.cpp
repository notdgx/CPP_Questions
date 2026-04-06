// Que 97 : "Write a C++ method to check leap year"


#include <iostream>

using namespace std;


int main(){

    int year;

    cout << "Enter year: ";
    cin >> year;

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)){
        cout << "Leap year";
    }

    else{
        cout << "Not a leap year";
    }

    return 0;
}


// PS D:\tmp\cpp_website\05-Basic_Programming_Constructs_113> cd "d:\tmp\cpp_website\05-Basic_Programming_Constructs_113\" ; if ($?) { g++ que54.cpp -o que54 } ; if ($?) { .\que54 }
// Enter year: 2008
// Leap year