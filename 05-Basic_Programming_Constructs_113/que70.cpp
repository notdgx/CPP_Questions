// Que 70 : "Write a C++ program to trim a string"


#include <iostream>
#include <string>

using namespace std;


int main(){

    string text;

    cout << "Enter a string: ";
    getline(cin, text);

    int start = 0;
    int end = text.length() - 1;

    while (start <= end && text[start] == ' '){
        start++;
    }

    while (end >= start && text[end] == ' '){
        end--;
    }

    string trimmed = "";
    for (int i = start; i <= end; i++){
        trimmed += text[i];
    }

    cout << "Trimmed string : " << trimmed ;
    return 0;
}


// PS D:\tmp\cpp_website\05-Basic_Programming_Constructs_113> cd "d:\tmp\cpp_website\05-Basic_Programming_Constructs_113\" ; if ($?) { g++ que70.cpp -o que70 } ; if ($?) { .\que70 }
// Enter a string:    jsdjs   jh      
// Trimmed string : jsdjs   jh