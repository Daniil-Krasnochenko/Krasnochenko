#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "");
    cout << "Введите три числа " << endl;
    int  a, b, c;
    cin >> a >> b >> c;
    if (a < b && b < c) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}

