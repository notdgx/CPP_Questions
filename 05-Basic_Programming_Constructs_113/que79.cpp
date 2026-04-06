// Que 79 : "Write a C++ program to count total number of lines from a string"


#include <iostream>
#include <string>

using namespace std;


int main(){

    string text;
    int lines = 1;

    cout << "Enter text : ";
    getline(cin, text);

    for (int i = 0; i < (int)text.length(); i++){
        if (text[i] == '\n'){
            lines++;
        }
    }

    cout << "Total lines: " << lines ;
    return 0;
}


// PS D:\tmp\cpp_website\05-Basic_Programming_Constructs_113> cd "d:\tmp\cpp_website\05-Basic_Programming_Constructs_113\" ; if ($?) { g++ que79.cpp -o que79 } ; if ($?) { .\que79 }
// Enter text : hello
// Total lines: 1