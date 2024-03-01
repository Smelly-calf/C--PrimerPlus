//
// Created by serenity on 2024/2/7.
//
// car结构：生产商：字符数组或string对象字符串、生产年份：整数。向用户询问有多少辆汽车，使用new创建car结构动态数组。
// 提示用户输入每辆车的生产商（可能由多个单词组成）和年份信息。交替读取数值和字符串。
#include <iostream>
#include <string>
struct car {
    std::string make;
    int year;
};
int main()
{
    using namespace std;
    int car_num;
    cout << "How many cars do you wish to catalog? ";
    cin >> car_num;
    cin.get();  // note：混合输入数字和换行符：输入数字后要使用cin.get()丢弃换行符，否则无法再输入。
    // 使用new创建一个car结构组成的动态数组
    car * cars = new car [car_num];
    // 循环输入车的生产商make和生产年份year
    for (int i = 0; i < car_num; i++)
    {
        cout << "Car #" << i+1 << ":" << endl
             << "Please enter the make: ";
        getline(cin, cars[i].make);
        cout << "Please enter the year made: ";
        cin >> cars[i].year;
        cin.get();
    }
    for (int i = 0; i < car_num; i++)
    {
        cout << cars[i].year << " " << cars[i].make << endl;
    }
    delete [] cars;
    return 0;

}