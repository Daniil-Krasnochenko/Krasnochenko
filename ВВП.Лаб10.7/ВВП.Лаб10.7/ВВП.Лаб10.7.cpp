#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "");
    cout << " Введите стороны треугольника: \n";
    int  a, b, c;
    cin >> a >> b >> c;
    if (a < b + c && b < a + c && c < a + b) {
        cout << "Существует треугольник со сторонами a, b, c";
    }
    else {
        cout << "НЕ существует треугольник со сторонами a, b, c";
    }
    return 0;
}