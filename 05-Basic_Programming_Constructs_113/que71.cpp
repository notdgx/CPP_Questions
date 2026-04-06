// Que 71 : "Write a C++ program to get a substring between two positions"


#include <iostream>
#include <string>

using namespace std;


int main(){

    string text;
    int start;
    int end;

    cout << "Enter a string: ";
    getline(cin, text);

    cout << "Enter start and end positions: ";
    cin >> start >> end;

    if (start < 0 || end >= text.length() || start > end){
        cout << "Invalid positions";
        return 0;
    }

    string sub = "";
    for (int i = start; i <= end; i++){
        sub += text[i];
    }

    cout << "Substring: " << sub ;
    return 0;
}


// PS D:\tmp\cpp_website\05-Basic_Programming_Constructs_113> cd "d:\tmp\cpp_website\05-Basic_Programming_Constructs_113\" ; if ($?) { g++ que71.cpp -o que71 } ; if ($?) { .\que71 }
// Enter a string: hello world 
// Enter start and end positions: 4
// 6
// Substring: o w