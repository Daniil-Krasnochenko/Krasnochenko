#include <iostream>
#include <cmath>
using namespace std;
int Sign(double x) {
	if (x > 0) {
		return 1;
	}
	else if (x == 0) {
		return 0;
	}
	else {
		return -1;
	}
}
int main() {
	setlocale(LC_ALL, "");
	cout << "Введите 2 числа: " << endl;
	double a, b;
	cin >> a >> b;
	cout << Sign(a) + Sign(b) << endl;

}