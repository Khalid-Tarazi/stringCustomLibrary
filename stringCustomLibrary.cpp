#include <iostream>
#include "clsString.h";
using namespace std;

int main() {
    clsString String1; // object  - this will call the default construtor
    clsString String2("Kevin"); // object - this will call the parameterized constructor

    String1.Value = "Ali Ahmed";

    cout << "String 1 = " << String1.Value << endl;
    cout << "String 2 = " << String2.Value << endl;

    cout << "Number of words: " << String1.CountWords() << endl; // calling the function without object, so countWords to this String1.

    cout << "Number of words: " << String1.CountWords("Fadi ahmed rateb omar") << endl; // if I want to call the function using object.

    cout << "Number of words: " <<
        clsString::CountWords("Khalid Iyad Awad Tarazi") << endl; //using shared countWords for the given value.

    //----------------

    clsString String3("hi how are you?");
    
    cout << "String 3 = " << String3.Value << endl;
    cout << "String length " << String3.Length() << endl;

    //----------------

    String3.upperFirstLetterOfEachWord();
    cout << String3.Value << endl;

    //----------------

    String3.lowerFirstLetterOfEachWord();
    cout << String3.Value << endl;

    //----------------

    String3.upperAllString();
    cout << String3.Value << endl;

    String3.lowerAllString();
    cout << String3.Value << endl;

    //----------------

    cout << "After inverting a : "
        << clsString::invertLetterCase('a') << endl;
    
    //----------------

    String3.Value = "AbCdEfg";

    String3.invertAllLettersCase();
    cout << String3.Value << endl;

    String3.invertAllLettersCase();
    cout << String3.Value << endl;

    //----------------

    cout << "Capital letters count: "
        << clsString::countLetters("Khalid Tarazi", clsString::CapitalLetters) << endl << endl;

    //----------------

    String3.Value = "Welcome to Jordan";
    cout << String3.Value << endl;

    cout << "Capital letters count: " << String3.countCapitalLetters() << endl;

    //----------------

    cout << "Small Letters count :" << String3.countSmallLetters() << endl;

    //----------------

    cout << "vowels count :" << String3.countVowels() << endl;

    //----------------

    cout << "letter E count :" << String3.countSpecificLetter('E', false);

    //----------------

    cout << "is letter u vowel? " << clsString::isVowel('u') << endl;

    //----------------

    cout << "Words Count" << String3.CountWords() << endl;

    //----------------

    vector<string> vString;

    vString = String3.split(" ");

    cout << "\nTokens = " << vString.size() << endl;

    for (string& s : vString) {
        cout << s << endl;
    }

    //----------------
    //Trims

    String3.Value = "    Khalid Tarazi     ";
    cout << "\nString     = " << String3.Value;

    String3.Value = "    Khalid Tarazi     ";
    String3.trimLeft();
    cout << "\n\nTrim Left  = " << String3.Value;

    String3.Value = "    Khalid Tarazi     ";
    String3.trimRight();
    cout << "\nTrim Right  = " << String3.Value;

    String3.Value = "    Khalid Tarazi     ";
    String3.trim();
    cout << "\nTrim = " << String3.Value;

    //----------------
    //Joins










    system("pause>0");
    return 0;
};