//
// Created by serenity on 2024/2/6.
//
// 二维数组：输入3年每个月的销量，报告三年的总销售量
#include <iostream>
const int Year = 3;
const int Month = 12;
int main()
{
    using namespace std;
    // 月份
    const char * monthes[Month] = {
            "January",
            "February",
            "March",
            "April",
            "May",
            "June",
            "July",
            "August",
            "September",
            "October",
            "November",
            "December"
    };
    int year_sales[Year][Month];
    for ( int y = 0; y < Year; y++ )
    {
        for (int m = 0; m < Month; m++)
        {
            cout << "Please input year " << y+1 << " sales of " << monthes[m] << ": " << endl;
            cin >> year_sales[y][m];
        }
    }
    int ret = 0;
    for ( int y = 0; y < Year; y++ )
    {
        for ( int m = 0; m < Month; m++)
            ret += year_sales[y][m];
    }
    cout << " 3 years sales total: " << ret << endl;
    return 0;
}