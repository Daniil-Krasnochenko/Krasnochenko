#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "");
    cout << "Введите два числа: " << endl;
    int  a, b;
    cin >> a >> b;
    if (a > 2 && b <= 3) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}

