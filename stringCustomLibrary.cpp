#include <iostream>
#include "clsString.h"
using namespace std;

int main() {
    clsString String1;
    clsString String2("Kevin");

    String1.Value = "Ali Ahmed";

    cout << "String1 = " << String1.Value << endl;
    cout << "String2 = " << String2.Value << endl;


    cout << "Number of words: " << String1.CountWords() << endl;

    cout << "Number of words: " << String1.CountWords("Fadi ahmed rateb omar") << endl;

    cout << "Number of words: " <<
        clsString::CountWords("Khalid Iyad Awad Tarazi");

    system("pause>0");
    return 0;
};