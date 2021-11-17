#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "");
    cout << "Введите номер года:" << endl;
    int x;
    cin >> x;
    cout << "Номер столетия равен :" << endl;
    if (x % 100 > 0) {
        cout << x / 100 + 1;
    }
    else {
        cout << x / 100;
    }

    return 0;
}