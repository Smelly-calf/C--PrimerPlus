//
// Created by serenity on 2024/2/9.
//
// 嵌套循环：用户输入行数，然后，
// 程序显示相应行数的星号，每一行显示的字符数都是行数个字符：星号不够的情况下，在星号前面加上句点。
#include <iostream>

int main() {
    using namespace std;
    int row_num;
    cout << "Enter number of rows: ";
    cin >> row_num;
    for (int i = 0; i < row_num; i++) {
        for (int j = 0; j < row_num; j++) {
            // j 等于 row_num-1-i 时开始打印 *
            if (j < row_num - 1 - i) {
                cout << ".";
                continue;
            }
            cout << "*";
        }
        cout << endl;
    }
}