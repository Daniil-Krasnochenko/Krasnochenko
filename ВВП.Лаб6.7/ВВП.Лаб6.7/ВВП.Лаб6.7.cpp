#include <iostream>
using namespace std;
int main()
{
    int A, B,C;
    setlocale(0, "russian");
    cout << "Введите значение A \n";
    cin >> A;
    B = A * A;
    C = A * B;
    A = B * C;
    B = A * A;
    C = A * B;
    cout << C;
    return 0;
}
