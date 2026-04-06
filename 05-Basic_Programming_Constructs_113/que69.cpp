// Que 69 : "Write a C++ program to convert all characters in a string to uppercase"


#include <iostream>
#include <string>

using namespace std;


int main(){

    string text;

    cout << "Enter a string: ";
    getline(cin, text);

    for (int i = 0; i < (int)text.length(); i++){
        if (text[i] >= 'a' && text[i] <= 'z'){
            text[i] = text[i] - 32;
        }
    }

    cout << "Uppercase string: " << text ;
    return 0;
}


// PS D:\tmp\cpp_website\05-Basic_Programming_Constructs_113> cd "d:\tmp\cpp_website\05-Basic_Programming_Constructs_113\" ; if ($?) { g++ que69.cpp -o que69 } ; if ($?) { .\que69 }
// Enter a string: helloooo
// Uppercase string: HELLOOOO