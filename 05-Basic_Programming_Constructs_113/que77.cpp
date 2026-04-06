// Que 77 : "Write a C++ program to reverse a String"


#include <iostream>
#include <string>

using namespace std;


int main(){

    string text;

    cout << "Enter a string: ";
    getline(cin, text);

    int left = 0;
    int right = text.length() - 1;

    while (left < right){
        char temp = text[left];
        text[left] = text[right];
        text[right] = temp;
        left++;
        right--;
    }

    cout << "Reversed string: " << text ;
    return 0;
}


// S D:\tmp\cpp_website\05-Basic_Programming_Constructs_113> cd "d:\tmp\cpp_website\05-Basic_Programming_Constructs_113\" ; if ($?) { g++ que77.cpp -o que77 } ; if ($?) { .\que77 }
// Enter a string: Hellooooo
// Reversed string: ooooolleH