#include <iostream>
#include <cmath>
using namespace std;
int Fact(double x) {
	if (x <= 0) {
		return 1;
	}
	return x * Fact(x - 2);
}
int main() {
	setlocale(LC_ALL, "");
	cout << "Введите  число: " << endl;
	double a;
	cin >> a;
	cout << "Двойной факториал равен: " << endl;
	cout << Fact(a) << endl;

}