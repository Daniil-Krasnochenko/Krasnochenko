#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "");
    int  a;
    cin >> a;
    if (a == (a / 1000 + ((a / 100) % 10) * 10 + ((a / 10) % 10) * 100 + ((a % 10) * 1000))) {
        cout << "Данное число читается одинаково слева направо и справа налево";
    }
    else {
        cout << "Число НЕ читается с права на лево";
    }
    return 0;
}

