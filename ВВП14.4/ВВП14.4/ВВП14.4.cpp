#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "");
	cout << "Введите процентную ставку : ";
	double P, K = 0, q = 0, m = 0;
	cin >> P;
	P = (P / 100) + 1;
	for (int z = 1000; z <= 1100; z *= P) {
		q = z * P;
		m++;
	}
	cout << "Через ";
	cout << m << " месяц сумма вклада равна : " << q << endl;
}