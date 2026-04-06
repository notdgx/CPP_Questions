// Que 68 : "Write a C++ program to convert all characters in a string to lowercase"


#include <iostream>
#include <string>

using namespace std;


int main(){

    string text;

    cout << "Enter a string: ";
    getline(cin, text);

    for (int i = 0; i < text.length(); i++){
        if (text[i] >= 'A' && text[i] <= 'Z'){
            text[i] = text[i] + 32;
        }
    }

    cout << "Lowercase string: " << text ;
    return 0;
}


// PS D:\tmp\cpp_website\05-Basic_Programming_Constructs_113> cd "d:\tmp\cpp_website\05-Basic_Programming_Constructs_113\" ; if ($?) { g++ que68.cpp -o que68 } ; if ($?) { .\que68 }
// Enter a string: HELLOOOO
// Lowercase string: helloooo