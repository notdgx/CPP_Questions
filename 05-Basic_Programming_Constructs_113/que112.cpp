// Que 112 : "Write a C++ program to convert float to absolute value"


#include <iostream>
#include <string>

using namespace std;


int main(){

    string value;

    cout << "Enter float value: ";
    cin >> value;

    if (value.length() > 0 && value[0] == '-'){
        string absolute = "";

        for (int i = 1; i < (int)value.length(); i++){
            absolute += value[i];
        }

        cout << "Absolute value: " << absolute ;
    }

    else{
        cout << "Absolute value: " << value ;
    }

    return 0;
}


// PS D:\tmp\cpp_website\05-Basic_Programming_Constructs_113> cd "d:\tmp\cpp_website\05-Basic_Programming_Constructs_113\" ; if ($?) { g++ que112.cpp -o que112 } ; if ($?) { .\que112 }
// Enter float value: 43.434
// Absolute value: 43