// Que 48 : "C++ Program To Find Distance Between Two Points"


#include <iostream>

using namespace std;


int main(){

    int x1;
    int y1;
    int x2;
    int y2;

    cout << "Enter x1 y1 x2 y2: ";
    cin >> x1 >> y1 >> x2 >> y2;

    int dx = x2 - x1;
    int dy = y2 - y1;
    int distanceSquare = dx * dx + dy * dy;

    int distance = 0;
    while ((distance + 1) * (distance + 1) <= distanceSquare){
        distance++;
    }

    cout << "Distance is: " << distance ;
    return 0;
}

// PS D:\tmp\cpp_website\05-Basic_Programming_Constructs_113> cd "d:\tmp\cpp_website\05-Basic_Programming_Constructs_113\" ; if ($?) { g++ que48.cpp -o que48 } ; if ($?) { .\que48 }
// Enter x1 y1 x2 y2: 5
// 7
// 8
// 9
// Distance is: 3