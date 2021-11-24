#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "");
    cout << "Введите 2 числа: \n";
    int  a, b;
    cin >> a >> b;
    if (a > b) {
        b = a;
        cout << "Числу В присвоено значение А : ";
        cout << a << " " << b;
    }
    else if (a < b) {
        a = b;
        cout << "Числу А присвоено значение В : ";
        cout << a << " " << b;
    }
    else {
        a = b = 0;
        cout << "Числам В и А присвоено значение 0 : ";
        cout << a << " " << b;
    }
    return 0;
}
