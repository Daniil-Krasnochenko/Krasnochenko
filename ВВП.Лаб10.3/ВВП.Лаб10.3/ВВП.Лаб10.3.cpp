#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "");
    cout << "Введите число" << endl;
    int  a;
    cin >> a;
    if (a > 9 && a < 100 && a % 2 == 0) {
        cout << "Данное число является четным двузначным" << endl;

    }
    else {
        cout << "Данное число НЕ является четным двузначным" << endl;
    }
    return 0;
}
