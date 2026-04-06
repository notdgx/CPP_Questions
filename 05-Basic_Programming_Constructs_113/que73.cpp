// Que 73 : "Write a C++ program to get the length of a given string"


#include <iostream>
#include <string>

using namespace std;


int main(){

    string text;

    cout << "Enter a string: ";
    getline(cin, text);

    cout << "Length of string: " << text.length() ;
    return 0;
}


// PS D:\tmp\cpp_website\05-Basic_Programming_Constructs_113> cd "d:\tmp\cpp_website\05-Basic_Programming_Constructs_113\" ; if ($?) { g++ que73.cpp -o que73 } ; if ($?) { .\que73 }
// Enter a string: hello world
// Length of string: 11