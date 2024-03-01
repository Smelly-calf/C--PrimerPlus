//
// Created by serenity on 2024/2/9.
//
// if.cpp —— using the if statement
// 在while循环中使用过cin.get(char)读取字符，然后使用if语句判断
// 空格字符并计算空格字符数和字符总数。
#include <iostream>
int main()
{
    using std::cin;
    using std::cout;
    char ch;
    int spaces = 0;
    int total = 0;
    cin.get(ch);
    while (ch != '.')   // quit at the end of sentence
    {
        if (ch == ' ')   // check if ch is a space
            ++spaces;
        ++total;
        cin.get(ch);
    }
    cout << spaces << " spaces, " << total;
    cout << " characters total in sentence\n";
    return 0;
}
