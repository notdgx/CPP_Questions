// Que 72 : "Write a C++ program to replace all the ‘d’ characters with ‘f’ characters"


#include <iostream>
#include <string>

using namespace std;


int main(){

    string text;

    cout << "Enter a string: ";
    getline(cin, text);

    for (int i = 0; i < (int)text.length(); i++){
        if (text[i] == 'd'){
            text[i] = 'f';
        }
    }

    cout << "Updated string : " << text ;
    return 0;
}


// PS D:\tmp\cpp_website\05-Basic_Programming_Constructs_113> cd "d:\tmp\cpp_website\05-Basic_Programming_Constructs_113\" ; if ($?) { g++ que72.cpp -o que72 } ; if ($?) { .\que72 }
// Enter a string: hedddloo
// Updated string : hefffloo