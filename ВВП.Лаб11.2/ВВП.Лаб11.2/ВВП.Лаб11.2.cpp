#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "");
	cout << "Введите 3 числа : \n";
	int a, b, c;
	cin >> a >> b >> c;
	if (a > b && c > b) {
		cout << "a + c = " << a + c << endl;
	}
	else if (b > a && c > a) {
		cout << "b + c = " << b + c << endl;
	}
	else if (b > c && a > c) {
		cout << "b + a = " << b + a << endl;
	}
	return 0;
}