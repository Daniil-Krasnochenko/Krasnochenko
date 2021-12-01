#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "");
	cout << "Введите число последовательности Фибоначи : ";
	int a = 0, b = 1, N, q = 0, m = 2, w;
	cin >> N;
	while (b != N) {
		q = b;
		b = a + b;
		a = q;
		m++;
	}
	cout << "Номер числа в последовательности Фибоначи : ";
	cout << m << endl;
}