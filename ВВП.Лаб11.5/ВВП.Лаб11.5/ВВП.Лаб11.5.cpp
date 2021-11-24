#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "");
	cout << "Введите целое число:\n ";
	int a;
	cin >> a;
	setlocale(LC_ALL, "");
	if (a > 0 && a % 2 == 0) {
		cout << "Положительное четное число " << endl;
	}
	if (a > 0 && a % 2 == 1) {
		cout << "Положительное нечетное число " << endl;
	}
	if (a < 0 && a % 2 == 0) {
		cout << "Отрицательное четное число " << endl;
	}
	if (a < 0 && a % 2 == 1) {
		cout << "Отрицательное нечетное число " << endl;
	}
	if (a == 0) {
		cout << "Нулевое число " << endl;
	}
	return 0;
}