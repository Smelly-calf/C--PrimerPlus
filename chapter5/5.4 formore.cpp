//
// Created by serenity on 2024/1/26.
// 计算1～16的阶乘，0!=1，1!是1*0!，2!为2*1!
#include <iostream>

const int ArSize = 16; // example of external declaration

int main() {
    long long factorials[ArSize];
    factorials[1] = factorials[0] = 1LL;
    for (int i = 2; i < ArSize; i++)
        factorials[i] = i * factorials[i - 1];
    for (int i = 0; i < ArSize; i++)
        std::cout << i << "! = " << factorials[i] << std::endl;
    return 0;
}