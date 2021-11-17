#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    {	setlocale(LC_ALL, "");
    cout << "Введите трехзначное число" << endl;
    int  a, b, z = 0;
    cin >> a;
    cout << "Полученное в результате число: ";
    cout << (a % 100) * 10 + a / 100;
    return 0;
    }

