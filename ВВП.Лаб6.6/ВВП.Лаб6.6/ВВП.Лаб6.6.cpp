#include <iostream>
using namespace std;
int main()
{
    int A, B;
    setlocale(0, "russian");
    cout << "Введите значение A\n";
    cin >> A;
    B = A * A;
    A = B * B;
    B = A * A;
    cout << B;
    return 0;
}
