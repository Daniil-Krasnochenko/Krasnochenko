#include <iostream>
#include <cmath>
using namespace std;
int Quarter(int x, int y) {
	if (x > 0) {
		if (y > 0) {
			return 1;
		}
		else {
			return 2;
		}
	}
	else {
		if (y > 0) {
			return 4;
		}
		else {
			return 3;
		}
	}
}
int main() {
	setlocale(LC_ALL, "");
	int n = 3, a, b;
	while (n > 0) {
		cout << "Введите  пару чисел: " << endl;
		cin >> a >> b;
		cout << "Кординатная четверть по координатам: " << endl;
		cout << a << " И " << b << " <=> " << Quarter(a, b) << endl;
		n -= 1;
	}
}
