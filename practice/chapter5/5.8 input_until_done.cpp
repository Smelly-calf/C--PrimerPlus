//
// Created by serenity on 2024/2/9.
//
// 使用一个char数组每次读取一个单词，直到用户输入done位置，统计用户输入了多少个单词。
// 要包含头文件cstring，且使用strcmp()进行比较测试。
#include <iostream>
#include <cstring>

int main() {
    using namespace std;
    // 使用动态数组
    char * word = new char [10];
    cout << "Enter words(to stop, type the word done):" << endl;
    int count = 0;
    cin >> word;
    while (strcmp(word, "done") != 0) { // strcmp(s1,s2)当s1不等于s2时返回非0值，当s1等于s2时返回0值;
        count++;
        cin >> word;
    }
    cout << "You entered a total of " << count << " words.";
    return 0;
}