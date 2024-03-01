//
// Created by serenity on 2024/2/9.
//
// ifelse.cpp —— 对字符进行加密，除了换行符
#include <iostream>

int main() {
    char ch;

    std::cout << "Type, and I shall repeat.\n";
    std::cin.get(ch);
    while (ch != '.') {
        if (ch == '\n')
            std::cout << ch; // done if newline
        else
            std::cout << ++ch; // done otherwise
        std::cin.get(ch);
    }
    // try ch+1 instead of ++ch for interesting effect
    // cout如何处理不同字符：
    // 当使用++ch时输出的时cout回显的是字符；
    // 当使用ch+1时cout回显数字。
    std::cout << "\nPlease excuse the slight confusion.\n";
    // std::cin.get();
    // std::cin.get();
    return 0;
}