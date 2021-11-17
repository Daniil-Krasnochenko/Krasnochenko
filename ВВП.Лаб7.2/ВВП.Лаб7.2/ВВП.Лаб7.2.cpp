#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "");
    cout << "Введите величину угла в радианах: \n";
    double pi = 3.1415926, a;
    cin >> a;
    cout << "Угол равен  ";
    cout << "a1 = " << a / (pi / 180);
    cout << " градусов ";

    return 0;
}