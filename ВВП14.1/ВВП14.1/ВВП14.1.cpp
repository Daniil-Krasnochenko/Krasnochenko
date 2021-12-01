#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "");
	cout << "Введите числа A и B (A < B) : ";
	double B, A;
	cin >> A >> B;
	for (int z = A; z <= B; z += 1) {
		for (int q = z; q > 0; q--) {
			cout << z << " ";
		}
		cout << endl;
	}
}