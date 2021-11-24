#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "");
	int a;
	cout << "Введите целое число :\n";
	cin >> a;
	if (a / 10 == 0 && a % 2 == 0) {
		cout << "четное однозначное число " << endl;
	}
	if (a / 10 == 0 && a % 2 == 1) {
		cout << " не четное однозначное число " << endl;
	}
	if (a / 10 != 0 && a / 100 == 0 && a % 2 == 0) {
		cout << "четное двузначное число " << endl;
	}
	if (a / 10 != 0 && a / 100 == 0 && a % 2 == 1) {
		cout << "нечетное двузначное число " << endl;
	}
	if (a / 100 != 0 && a / 1000 == 0 && a % 2 == 0) {
		cout << "четное трезначное число " << endl;
	}
	if (a / 100 != 0 && a / 1000 == 0 && a % 2 == 1) {
		cout << "нечетное трезначное число " << endl;
	}
	return 0;
}