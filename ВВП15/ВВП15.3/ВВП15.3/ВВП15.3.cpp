#include <iostream>
#include <cmath>
using namespace std;
double Fact(double R1, double R2) {

	return 3.14 * abs(pow(R2, 2) - pow(R1, 2));
}
int main() {
	setlocale(LC_ALL, "");
	double n = 2, a, b;
	while (n > 0) {
		cout << "Введите  пару чисел: " << endl;
		cin >> a >> b;
		cout << a << " И " << b << " <=> " << Fact(a, b) << endl;
		n -= 1;
	}
}