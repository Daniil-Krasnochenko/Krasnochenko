#include <iostream>
#include <cmath>
using namespace std;
int main()
{	setlocale(LC_ALL, "");
    cout << "Введите двузначное число" << endl;
    int  a, b, z = 0;
    cin >> a;
    cout << "Полученное в результате число: ";
    cout << (a % 10) * 10 + a / 10;
    return 0;
    }

