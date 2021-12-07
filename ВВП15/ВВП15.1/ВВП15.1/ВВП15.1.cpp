#include <iostream>
#include <cmath>
using namespace std;
int PowerA3(int a, int b) {
	b = pow(a, 3);
	return b;
}
int main() {
	setlocale(LC_ALL, "");
	cout << "Введите  пять чисел , которые хотите возвести в 3 степень:  " << endl;
	int a, b = 0, n = 5;
	while (n > 0) {
		cin >> a;
		cout << a << " <=> " << PowerA3(a, b) << endl;
		n--;

	}
}