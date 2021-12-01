#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "");
	cout << "Введите длину отрезка а: ";
	double B, A, q = 0;
	cin >> A;
	cout << "Введите длину отрезка b: ";
	cin >> B;
	for (int z = A; z >= B; z -= B) {
		q = z;
	}
	cout << "Длина незанятой части отрезка A: ";
	cout << q - B << endl;
}
