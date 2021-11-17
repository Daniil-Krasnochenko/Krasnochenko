#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "");
    cout << "Ведите целое число K, лежащее в диапазоне 1–365 и число N лежащее в диапазоне 1–7 :" << endl;
    int N, K;
    cin >> K >> N;
    cout << "День недели под номером :";
    if ((K + N - 1) % 7 == 0) {
        cout << "7";
    }
    else {
        cout << (K + N - 1) % 7;
    }
    return 0;
}