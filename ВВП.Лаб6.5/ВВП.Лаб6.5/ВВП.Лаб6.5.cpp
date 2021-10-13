#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x;
    setlocale(0, "russian");
    cout << "Введите значение x\n";
    cin >> x;
    cout << 4 * pow(x-3, 6) - 7 * pow(x-3, 3) + 2;
    return 0;
}