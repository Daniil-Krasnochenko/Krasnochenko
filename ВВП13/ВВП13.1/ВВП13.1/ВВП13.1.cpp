#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "");
	cout << "Введите цену товара ";
	double a;
	cin >> a;
	cout << "Цена 0.1кг = " << 0.1 * a << endl
		<< "Цена 0.2кг = " << 0.2 * a << endl
		<< "Цена 0.3кг = " << 0.3 * a << endl
		<< "Цена 0.4кг = " << 0.4 * a << endl
		<< "Цена 0.5кг = " << 0.5 * a << endl
		<< "Цена 0.6кг = " << 0.6 * a << endl
		<< "Цена 0.7кг = " << 0.7 * a << endl
		<< "Цена 0.8кг = " << 0.8 * a << endl
		<< "Цена 0.9кг = " << 0.9 * a << endl
	    << "Цена 1кг = " << a << endl;
}