//
// Created by serenity on 2024/2/5.
//
// 输入两个整数：计算并输出这两个整数之间所有整数的和
#include <iostream>
int main(){
    using namespace std;
    int num1, num2;
    cout << "请输入两个整数，用空格分隔" << endl;
    cin >> num1;
    cin.get();
    cin >> num2;
    int sum = 0;
    for (int i = num1; i <= num2; i++)
        sum += i;
    cout << num1 << "～" << num2 << "之间所有整数的和为：" << sum << endl;
    return 0;
}