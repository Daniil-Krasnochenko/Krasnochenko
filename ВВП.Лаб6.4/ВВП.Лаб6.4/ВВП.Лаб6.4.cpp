#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x;
    setlocale(0, "russian");
    cout << "Введите значение x\n";
    cin >> x;
    cout << 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
    return 0;
}