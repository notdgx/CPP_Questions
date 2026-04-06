// Que 67 : "Write a C++ program to concatenate two string"


#include <iostream>
#include <string>

using namespace std;


int main(){

    string first;
    string second;

    cout << "Enter first string: ";
    cin >> first;

    cout << "Enter second string: ";
    cin >> second;

    string result = first + second;

    cout << "Concatenated string: " << result ;
    return 0;
}


// PS D:\tmp\cpp_website\05-Basic_Programming_Constructs_113> cd "d:\tmp\cpp_website\05-Basic_Programming_Constructs_113\" ; if ($?) { g++ que67.cpp -o que67 } ; if ($?) { .\que67 }
// Enter first string: hello 
// Enter second string: workd
// Concatenated string: helloworkd