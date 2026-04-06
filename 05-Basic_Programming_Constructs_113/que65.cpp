// Que 65 : "Write a C++ program that determines a student’s grade"


#include <iostream>

using namespace std;


int main(){

    int marks;

    cout << "Enter marks: ";
    cin >> marks;

    if (marks < 0 || marks > 100){
        cout << "Invalid marks";
        return 0;
    }

    if (marks >= 90){
        cout << "Grade A";
    }

    else if (marks >= 80){
        cout << "Grade B";
    }

    else if (marks >= 70){
        cout << "Grade C";
    }

    else if (marks >= 60){
        cout << "Grade D";
    }

    else{
        cout << "Grade F";
    }

    return 0;
}


// PS D:\tmp\cpp_website\05-Basic_Programming_Constructs_113> cd "d:\tmp\cpp_website\05-Basic_Programming_Constructs_113\" ; if ($?) { g++ que65.cpp -o que65 } ; if ($?) { .\que65 }
// Enter marks: 6
// Grade F