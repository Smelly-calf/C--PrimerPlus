//
// Created by serenity on 2024/2/6.
//
// char*数组存储12个月份，输出12个月图书馆总销量
#include <iostream>
const int Month = 12;
int main()
{
    using namespace std;
    const char * monthes[Month] = {
            "Jan",
            "Feb",
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
    int sales_volume[Month];
    for (int i = 0; i < Month; i++ ) {
        cout << " Please input sales volume of " << monthes[i] << ": " << endl;
        cin >> sales_volume[i];
    }
    int sum = 0;
    for ( int i = 0; i < Month; i++ ) {
        sum += sales_volume[i];
    }
    cout << " sales total: " << sum << endl;
}