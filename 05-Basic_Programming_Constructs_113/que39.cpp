// Que 39 : "C++ program to calculate average marks"


#include <iostream>

using namespace std;


int main(){

    int subjects;
    int marks;
    int total = 0;

    cout << "Enter number of subjects: ";
    cin >> subjects;
    for (int i = 1; i <= subjects; i++){
        cout << "Enter marks for subject no. " << i << " : ";
        cin >> marks;
        total += marks;
    }

    cout << "Average marks : " << total / subjects;
    return 0;
}


// PS D:\tmp\cpp_website\05-Basic_Programming_Constructs_113> cd "d:\tmp\cpp_website\05-Basic_Programming_Constructs_113\" ; if ($?) { g++ que39.cpp -o que39 } ; if ($?) { .\que39 }
// Enter number of subjects: 5
// Enter marks for subject no. 1 : 2
// Enter marks for subject no. 2 : 2
// Enter marks for subject no. 3 : 2
// Enter marks for subject no. 4 : 2
// Enter marks for subject no. 5 : 2
// Average marks : 2