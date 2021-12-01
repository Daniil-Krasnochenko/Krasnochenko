#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "");
	cout << "Введите число : ";
	double n, q = 1, s = 1.1;
	cin >> n;
	for (int z = 0; z < n; z++) {
		q = s * q;
		s += 0.1;
	}
	cout << "Произведение 1.1 · 1.2 · 1.3 · . . . (N сомножителей) = " << q << endl;
}