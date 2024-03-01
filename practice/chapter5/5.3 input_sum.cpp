//
// Created by serenity on 2024/2/6.
//
// 要求用户输入数字，每次输入后，计算到目前为止的累计和，输入0时，程序结束。
#include <iostream>
int main()
{
    using namespace std;
    cout << " Input numbers, 0 for end: "<< endl;
    int accumulate = 0;
    double number;
    cin >> number;
    while (number != 0) {
        accumulate += number;
        cout << " accumulate: " << accumulate << endl;
        cin >> number;
    }
    return 0;
}