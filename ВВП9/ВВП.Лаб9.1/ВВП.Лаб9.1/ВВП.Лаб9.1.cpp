#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "");
    cout << "С начала суток прошло секунд :" << endl;
    int x;
    cin >> x;
    cout << "Количество секунд, прошедших с начала последней минуты: ";
    cout << x % 60;
    return 0;
}

