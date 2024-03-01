//
// Created by serenity on 2024/2/9.
//
// 使用string对象存储用户输入，直到输入done停止，统计输入的单词数。
#include <iostream>
#include <string>
int main()
{
    using namespace std;
    string str;
    int count = 0;
    cout << "Enter words(to stop, type the word done):" << endl;
    cin >> str;
    while (str != "done") {
        count++;
        cin >> str;
    }
    cout << "You entered a total of " << count << " words.";
    return 0;
}