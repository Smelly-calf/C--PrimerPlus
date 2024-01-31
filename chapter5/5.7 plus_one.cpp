//
// Created by serenity on 2024/1/30.
//
// plus_one.cpp -- the increment operator
#include <iostream>
void test_priority();

int main() {
    test_priority();
    return 0;
}

int plus_one()
{
    using std::cout;
    int a = 20;
    int b = 20;
    cout << "a = " << a << ": b = " << b << "\n";
    cout << "a++ = " << a++ << ": ++b = " << ++b << "\n";
    cout << "a = " << a << ": b = " << b << "\n";
    return 0;
}

void test_priority()
{
    double arr[5] = {21.1, 32.8, 23.4, 45.2, 37.4};
    double *pt = arr;
    ++pt;             //此时pt指向arr[1]
    double x = *++pt; // 从右到左结合：++pt将pt移动到arr[2], 然后返回arr[2]的值，表达式的结果：23.4
    ++*pt; // 从右到左结合：*pt的值为23.4，然后将这个值加1，结果：24.4
    // 此时pt指向arr[2]，arr[2]的值变成了24.4
    (*pt)++; //括号优先级最高：*pt取arr[2]的值24.4，再后缀递增，结果：25.4
    // 此时pt还是指向arr[2]，为什么arr[2]变为了25.4呢？
    x = *pt++; // 后缀运算符优先级高：先pt++，然而后缀运算符是对原来的地址
    //（&arr[2]）解除引用，*pt++的值是arr[2]的值25.4，但这条语句执行完毕后pt指向arr[3]
}
