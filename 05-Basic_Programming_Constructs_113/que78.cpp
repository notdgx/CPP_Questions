// Que 78 : "Write a C++ program to remove html tags from a string"


#include <iostream>
#include <string>

using namespace std;


int main(){

    string text;
    string result = "";
    int inTag = 0;

    cout << "Enter html string : ";
    getline(cin, text);

    for (int i = 0; i < (int)text.length(); i++){
        if (text[i] == '<'){
            inTag = 1;
        }

        else if (text[i] == '>'){
            inTag = 0;
        }

        else if (inTag == 0){
            result += text[i];
        }
    }

    cout  << result ;
    return 0;
}


// PS D:\tmp\cpp_website\05-Basic_Programming_Constructs_113> cd "d:\tmp\cpp_website\05-Basic_Programming_Constructs_113\" ; if ($?) { g++ que78.cpp -o que78 } ; if ($?) { .\que78 }
// Enter html string : <tag> Hello World </tag>
//  Hello World 