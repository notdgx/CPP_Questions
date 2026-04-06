// Que 51 : "Write a C++ program to find the number of days in a month"


#include <iostream>

using namespace std;


int main(){

    int month;
    int year;

    cout << "Enter month : ";
    cin >> month;

    cout << "Enter year : ";
    cin >> year;

    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
        cout << "Number of days: 31";
    }

    else if (month == 4 || month == 6 || month == 9 || month == 11){
        cout << "Number of days: 30";
    }

    else{
        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)){
            cout << "Number of days: 29";
        }

        else{
            cout << "Number of days: 28";
        }
    }

    return 0;
}


// PS D:\tmp\cpp_website\05-Basic_Programming_Constructs_113> cd "d:\tmp\cpp_website\05-Basic_Programming_Constructs_113\" ; if ($?) { g++ que51.cpp -o que51 } ; if ($?) { .\que51 }
// Enter month : 2
// Enter year : 2008
// Number of days: 29