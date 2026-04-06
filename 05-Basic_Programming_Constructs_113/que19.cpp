// Que 19 : "Write a C++ program to convert seconds to hour, minute and seconds"


#include <iostream>

using namespace std;


int main(){

    int totalSeconds;

    cout << "Enter seconds : ";
    cin >> totalSeconds;

    int hours = totalSeconds / 3600;
    int minutes = (totalSeconds % 3600) / 60;
    int seconds = totalSeconds % 60;

    cout << "Hours: " << hours << "\n";
    cout << "Minutes: " << minutes << "\n";
    cout << "Seconds: " << seconds ;
    return 0;
}


// PS D:\tmp\cpp_website\05-Basic_Programming_Constructs_113> cd "d:\tmp\cpp_website\05-Basic_Programming_Constructs_113\" ; if ($?) { g++ que19.cpp -o que19 } ; if ($?) { .\que19 }
// Enter seconds : 5600
// Hours: 1
// Minutes: 33
// Seconds: 20