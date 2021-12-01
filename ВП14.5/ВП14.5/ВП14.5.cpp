#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "");
	cout << "Введите 2 числа : ";
	int a, b, c = 0, q = 0, m = 0, w;
	cin >> a >> b;
	while (b != 0) {
		c = b;
		b = a % c;
		a = c;
	}
	cout << "Их НОД равен : ";
	cout << c;
}