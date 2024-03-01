//
// Created by serenity on 2024/2/5.
//
// 使用array对象和long double计算100！的值
#include <iostream>
#include <array>

const int ArSize = 16; // example of external declaration

int main() {
    using namespace std;
    array<long double, ArSize> factorials;
    factorials[1] = factorials[0] = 1L;
    for (int i = 2; i < ArSize; i++)
        factorials[i] = i * factorials[i - 1];
    for (int i = 0; i < ArSize; i++)
        std::cout << i << "! = " << factorials[i] << std::endl;
    return 0;
}