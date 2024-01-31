//
// Created by serenity on 2024/1/30.
//
// express.cpp -- values of expressions
#include <iostream>

int main() {
    using namespace std;
    int x;

    cout << "The expression x=100 has the value: ";
    cout << (x = 100) << endl;
    cout << "The expression x>3 has the value ";
    cout << (x > 3) << endl;
    cout.setf(ios_base::boolalpha); // a newer C++ feature，标记命令cout显示true和false
    cout << "The expression x < 3 has the value ";
    cout << (x < 3) << endl;
    cout << "The expression x > 3 has the value ";
    cout << (x > 3) << endl;
    return 0;
}