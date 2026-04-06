// Que 75 : "Write a C++ program to get the character at the given index"


#include <iostream>
#include <string>

using namespace std;


int main(){

    string text;
    int index;

    cout << "Enter a string: ";
    getline(cin, text);

    cout << "Enter index: ";
    cin >> index;

    cout << "Character is: " << text[index] ;
    return 0;
}


// PS D:\tmp\cpp_website\05-Basic_Programming_Constructs_113> cd "d:\tmp\cpp_website\05-Basic_Programming_Constructs_113\" ; if ($?) { g++ que75.cpp -o que75 } ; if ($?) { .\que75 }
// Enter a string: Hello World
// Enter index: 4
// Character is: o