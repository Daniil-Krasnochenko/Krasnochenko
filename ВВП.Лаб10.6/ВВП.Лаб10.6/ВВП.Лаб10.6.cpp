#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "");
    cout << "Введите стороны треугольника: \n";
    int  a, b, c;
    cin >> a >> b >> c;
    if (sqrt(pow(a, 2) + pow(b, 2)) == c) {
        cout << "Треугольник со сторонами a, b, c является прямоугольным";
    }
    else {
        cout << "Треугольник со сторонами a, b, c НЕ является прямоугольным";
    }
    return 0;
}