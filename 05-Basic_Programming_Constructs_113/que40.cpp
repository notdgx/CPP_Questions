// Que 40 : "C++ program to check vowel or consonant"


#include <iostream>

using namespace std;


int main(){

    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    if (!((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))){
        cout << "Not alphabet ";
        return 0;
    }

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
        cout << "Vowel ";
    }

    if (!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')){
        cout << "Consonant";
    }

    return 0;
}


// PS D:\tmp\cpp_website\05-Basic_Programming_Constructs_113> cd "d:\tmp\cpp_website\05-Basic_Programming_Constructs_113\" ; if ($?) { g++ que40.cpp -o que40 } ; if ($?) { .\que40 }
// Enter a character: E
// Vowel 