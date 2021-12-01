#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "");
	cout << "Введите 2 числа : ";
	double n, A, q = 0;
	cin >> A >> n;
	for (int z = 0; z <= n; z += 1) {
		q = q + pow(A, z);
	}
	cout << " 1 + A + A^2 + A^3 + . . . + A^N = " << q;
}