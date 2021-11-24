#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "");
    cout << "Введите величину отрезков А и В:" << endl;
    int  a, b, z = 0;
    cin >> a >> b;
    cout << "количество отрезков B, размещенных на отрезке A: ";
    for (int m = a; m >= b; m -= b) {
        z++;
    }
    cout << z;
    return 0;
}

