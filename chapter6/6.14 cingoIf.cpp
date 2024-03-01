//
// Created by serenity on 2024/2/9.
//
// cingolf —— 输入5个高尔夫得分，当cin输入非数字时重置cin并删除无效输入，提示用户重新输入。
#include <iostream>

const int Max = 5;

int main() {
    using namespace std;
    int golf[Max];
    cout << "Please enter your golf scores.\n";
    cout << "You must enter " << Max << " rounds.\n";
    int i;
    for (i = 0; i < Max; i++) {
        cout << "round #" << i + 1 << ": ";
        while (!(cin >> golf[i])) {
            cin.clear();
            while (cin.get() != '\n') // 读取行尾之前的所有输入将其删除
                continue;   // get rid of bad input
            cout << "Pleas enter a number: ";
        }
    }
    // calculate average
    double total = 0.0;
    for (i = 0; i < Max; i++)
        total += golf[i];
    // report results
    cout << total / Max << " = average score "
         << Max << "rounds\n";
    return 0;
}