#include <iostream>
#include "clsString.h";
using namespace std;

int main() {
    clsString String1; // object  - this will call the defualt construtor
    clsString String2("Kevin"); // object - this will call the parameterized constructor

    String1.Value = "Ali Ahmed";

    cout << "String1 = " << String1.Value << endl;
    cout << "String2 = " << String2.Value << endl;

    cout << "Number of words: " << String1.CountWords() << endl; // calling the function without object, so countWords to this String1.

    cout << "Number of words: " << String1.CountWords("Fadi ahmed rateb omar") << endl; // if I want to call the function using object.

    cout << "Number of words: " <<
        clsString::CountWords("Khalid Iyad Awad Tarazi"); //using shared countWords for the given value.

    system("pause>0");
    return 0;
};