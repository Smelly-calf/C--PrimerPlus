//
// Created by serenity on 2024/2/9.
//
#include <iostream>
#include <cctype> // prototypes for character functions
int main()
{
    using namespace std;
    cout << "Enter text for analysis, and type @"
            " to terminate input.\n";
    char ch;
    int whitespace = 0;
    int digits = 0;
    int chars = 0;
    int punct = 0;
    int others = 0;

    cin.get(ch); // get可以输入任意字符
    while (ch != '@')
    {
        if(isalpha(ch)) // is it an alphabetic character?
            chars++;
        else if (isspace(ch)) // is it a whitespace character?
            // 空格字符计数包括换行符
            whitespace++;
        else if (isdigit(ch)) // is it a digit?
            digits++;
        else if(ispunct(ch))    // is it punctuation?
            punct++;
        else
            others++;
        cin.get(ch);    // get next character
    }
    cout << chars << " letters, "
         << whitespace << " whitespace, "
         << digits << " digits, "
         << punct << " punctuations, "
         << others << " others.\n";
    return 0;
}