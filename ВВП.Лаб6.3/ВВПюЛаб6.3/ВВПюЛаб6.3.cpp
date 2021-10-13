#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a, b, c;
    setlocale(0, "russian");
    cout << "Введите значения a, b,c\n";
    cin >> a >> b >> c;
    swap(a, c);
    swap(a, b);
    cout << a << " " << b << " " << c;
    return 0;
}