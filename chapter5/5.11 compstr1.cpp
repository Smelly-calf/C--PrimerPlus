//
// Created by serenity on 2024/1/31.
//
// compstr1.cpp -- comparing strings using arrays
#include <iostream>
#include <cstring> // prototype for strcmp()
int main()
{
    using namespace std;
    char word[5] = "?ate";
    for (char ch = 'a'; strcmp(word, "mate"); ch++) // strcmp(word, "mate") 当word等于mate时终止循环
    {
        cout << word << endl;
        word[0] = ch;
    }
    cout << "After loop ends, word is " << word << endl;
    return 0;
}