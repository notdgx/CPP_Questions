// Que 53 : "Write a C++ Program to accept number of week’s day (1-7) and print name of the day"

#include <iostream>
using namespace std;

int main() {

    int day;

    cout << "Enter day number : ";
    cin >> day;

    switch(day) {
        case 1:
            cout << "Monday";
            break;

        case 2:
            cout << "Tuesday";
            break;

        case 3:
            cout << "Wednesday";
            break;

        case 4:
            cout << "Thursday";
            break;

        case 5:
            cout << "Friday";
            break;

        case 6:
            cout << "Saturday";
            break;

        case 7:
            cout << "Sunday";
            break;

        default:
            cout << "Invalid day number";
    }

    return 0;
}

// PS D:\tmp\cpp_website\05-Basic_Programming_Constructs_113> cd "d:\tmp\cpp_website\05-Basic_Programming_Constructs_113\" ; if ($?) { g++ que53.cpp -o que53 } ; if ($?) { .\que53 }
// Enter day number : 5
// Friday