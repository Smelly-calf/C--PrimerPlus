//
// Created by serenity on 2024/2/6.
//
// 利润：当Cleo本息一起存的总额 > Daphne固定本金存款时，程序结束，输出此时两人的价值
#include <iostream>

int main() {
    using namespace std;
    double daphne_account = 100, cleo_account = 100;
    double cleo_multiplier = 0.05;
    int daphne_step = 10;
    int year = 0;
    while (cleo_account <= daphne_account) {
        year++;
        cleo_account *= (1 + cleo_multiplier);
        daphne_account += daphne_step;
    }
    cout << "After " << year << " year, "
     << "Cleo's account is: " << cleo_account
     << " while more than Daphne's account: " << daphne_account << endl;
    return 0;

}