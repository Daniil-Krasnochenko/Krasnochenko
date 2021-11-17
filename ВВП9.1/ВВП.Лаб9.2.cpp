#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "");
    cout << "Ведите целое число K, лежащее в диапазоне 1–365:" << endl;
    int x;
    cin >> x;
    cout << "Номер дня недели: ";
    cout << x % 7;
    return 0;
}

