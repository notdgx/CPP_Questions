// Que 76 : "Write a C++ program to remove a particular character from a string"


#include <iostream>
#include <string>

using namespace std;


int main(){

    string text;
    char c;
    string result = "";

    cout << "Enter a string: ";
    getline(cin, text);

    cout << "Enter character to remove: ";
    cin >> c;

    for (int i = 0; i < (int)text.length(); i++){
        if (text[i] != c){
            result += text[i];
        }
    }

    cout << "Updated string : " << result ;
    return 0;
}


// PS D:\tmp\cpp_website\05-Basic_Programming_Constructs_113> cd "d:\tmp\cpp_website\05-Basic_Programming_Constructs_113\" ; if ($?) { g++ que76.cpp -o que76 } ; if ($?) { .\que76 }
// Enter a string: Hello World
// Enter character to remove:  
// o
// Updated string : Hell Wrld