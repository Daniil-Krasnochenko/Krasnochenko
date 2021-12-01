#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "");
	cout << "Введите число : ";
	double n, q = 0;
	cin >> n;
	for (int z = 1; z <= 2 * n - 1; z += 2) {
		q += z;
		cout << "Квадрат числа " << sqrt(q) << " равен " << q << endl;
	}
}