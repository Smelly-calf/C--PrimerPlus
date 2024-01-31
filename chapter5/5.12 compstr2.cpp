//
// Created by serenity on 2024/1/31.
//
// compstr2.cpp -- comparing strings using arrays
#include <iostream>
#include <string> // string class
int main()
{
    using namespace std;
    string word = "?ate";
    for (char ch = 'a'; word != "mate"; ch++) // 一个操作数是string对象，一个操作数可以是c风格字符串，也可以使用string类进行比较
    {
        cout << word << endl;
        word[0] = ch;
    }
    cout << "After loop ends, word is " << word << endl;
    return 0;
}