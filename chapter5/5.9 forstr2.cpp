//
// Created by serenity on 2024/1/30.
//
// forstr2.cpp -- reversing an array
#include <iostream>
#include <string>

int main() {
    using namespace std;
    cout << "Enter a word: ";
    string word;
    cin >> word;

    // physically modify string object
    char temp;
    int i, j;    // comma is a separator here, not an operator
    for (j = 0, i = word.size() - 1; j < i; --i, ++j)  // 使用逗号运算符将两个表达式合并为一个
    {                           // start block
        temp = word[i];
        word[i] = word[j];
        word[j] = temp;
    }                           // end block
    cout << word << "\nDone\n";
    return 0;
}