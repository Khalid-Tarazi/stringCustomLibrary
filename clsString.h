#pragma once
#include <iostream>
#include <vector>
using namespace std;

class clsString {

private:
    string _Value;

public:

    clsString() { //default constructor
        _Value = "";
    }

    clsString(string Value) { //parameterized constructor
        _Value = Value;
    }

    void SetValue(string Value) {
        _Value = Value;
    }

    string GetValue() {
        return _Value;
    }

    __declspec(property(get = GetValue, put = SetValue)) string Value; //so I can deal with the string value using '='
    
    static short Length(string s1) {
        return s1.length();
    }

    short Length() {
        return _Value.length();
    };

    static short CountWords(string S1) {

        string delim = " "; // delimiter  
        short Counter = 0;
        short pos = 0;
        string sWord; // define a string variable  

        // use find() function to get the position of the delimiters  
        while ((pos = S1.find(delim)) != std::string::npos) {
            sWord = S1.substr(0, pos); // store the word   
            if (sWord != "") {
                Counter++;
            }

            //erase() until positon and move to next word.
            S1.erase(0, pos + delim.length());
        }

        if (S1 != "") {
            Counter++; // it counts the last word of the string.
        }

        return Counter;
    }

    short CountWords() {
        return CountWords(_Value);
    }

    static string upperFirstLetterOfEachWord(string s) {
        bool isFirstLetter = true;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] != ' ' && isFirstLetter) {
                s[i] = toupper(s[i]);
            }

            isFirstLetter = (s[i] == ' ' ? true : false);
        }

        return s;
    }

    void upperFirstLetterOfEachWord() {
        // no need to return value , this function will directly update the object value  
        _Value = upperFirstLetterOfEachWord(_Value);
    }

    static string lowerFirstLetterOfEachWord(string s) {
        bool isFirstLetter = true;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] != ' ' && isFirstLetter) {
                s[i] = tolower(s[i]);
            }

            isFirstLetter = (s[i] == ' ' ? true : false);
        }

        return s;
    }

    void lowerFirstLetterOfEachWord() {
        // no need to return value , this function will directly update the object value
        _Value = lowerFirstLetterOfEachWord(_Value);
    }

    static string upperAllString(string st) {

        for (short i = 0; i < st.size(); i++) {
            st[i] = toupper(st[i]);
        }
        return st;
    }

    void upperAllString() {
        _Value = upperAllString(_Value);
    }

    static string lowerAllString(string st) {

        for (int i = 0; i < st.size(); i++) {
            st[i] = tolower(st[i]);
        }
        return st;
    }

    void lowerAllString() {
        _Value = lowerAllString(_Value);
    }

    static char invertLetterCase(char c) {
        return isupper(c) ? tolower(c) : toupper(c); // I used built in function, instead of checking in ASCII table
    }

    static string invertAllStringLettersCase(string S1) {
        for (short i = 0; i < S1.length(); i++) {
            S1[i] = invertLetterCase(S1[i]);
        }
        return S1;
    }

    void invertAllLettersCase() {
        _Value = invertAllStringLettersCase(_Value);
    }

    enum enWhatToCount { SmallLetters = 0, CapitalLetters = 1, All = 3 };

    static short countLetters(string S1, enWhatToCount WhatToCount = enWhatToCount::All) {
        if (WhatToCount == enWhatToCount::All) {
            return S1.length();
        }

        short Counter = 0;
        for (short i = 0; i < S1.length(); i++) {
            if (WhatToCount == enWhatToCount::CapitalLetters && isupper(S1[i]))
                Counter++;
            if (WhatToCount == enWhatToCount::SmallLetters && islower(S1[i]))
                Counter++;
        }
        return Counter;
    }

    static short countCapitalLetters(string S1) {
        short Counter = 0;
        for (short i = 0; i < S1.length(); i++) {
            if (isupper(S1[i]))
                Counter++;
        }
        return Counter;
    }

    short countCapitalLetters() {
        return countCapitalLetters(_Value);
    }

    static short countSmallLetters(string S1) {
        short Counter = 0;
        for (short i = 0; i < S1.length(); i++) {
            if (islower(S1[i]))
                Counter++;
        }
        return Counter;
    }

    short countSmallLetters() {
        return countSmallLetters(_Value);
    }

    static short  countSpecificLetter(string S1, char Letter, bool MatchCase = true)
    {

        short Counter = 0;

        for (short i = 0; i < S1.length(); i++)
        {

            if (MatchCase)
            {
                if (S1[i] == Letter)
                    Counter++;
            }
            else
            {
                if (tolower(S1[i]) == tolower(Letter))
                    Counter++;
            }

        }

        return Counter;
    }

    short  countSpecificLetter(char Letter, bool MatchCase = true)
    {
        return countSpecificLetter(_Value, Letter, MatchCase);
    }

    static bool isVowel(char letter) {
        letter = tolower(letter);

        return (letter == 'a') || (letter == 'e') || (letter == 'i') || (letter == 'o') || (letter == 'u');
    }

    static short countVowels(string s) {
        short count = 0;

        for (short i = 0; i < s.length(); i++) {
            if (isVowel(s[i])) {
                count++;
            }
        }

        return count;
    }

    short countVowels() {
        return countVowels(_Value);
    }

    static vector<string> split(string S1, string Delim) {

        vector<string> vString;

        short pos = 0;
        string sWord; // define a string variable  

        // use find() function to get the position of the delimiters  
        while ((pos = S1.find(Delim)) != std::string::npos) {
            sWord = S1.substr(0, pos); // store the word   
            if (sWord != "") {
                vString.push_back(sWord);
            }
            S1.erase(0, pos + Delim.length());  /* erase() until positon and move to next word. */
        }

        if (S1 != "") {
            vString.push_back(S1); // it adds last word of the string.
        }

        return vString;
    }

    vector<string> split(string Delim) {
        return split(_Value, Delim);
    }

    static string trimLeft(string s) {

        for (short i = 0; i < s.length(); i++) {
            if (s[i] != ' ') {
                return s.substr(i, s.length() - i);
            }
        }

        return "";
    }

    void trimLeft() {
        _Value  = trimLeft(_Value);
    }

    static string trimRight(string s) {

        for (short i = s.length() - 1; i >= 0; i--) {
            if (s[i] != ' ') {
                return s.substr(0, i + 1);
            }
        }

        return "";
    }

    void trimRight() {
        _Value = trimRight(_Value);
    }

    string trim(string s) {
        return trimLeft(trimRight(s));
    }

    void trim() {
        _Value = trim(_Value);
    }








};