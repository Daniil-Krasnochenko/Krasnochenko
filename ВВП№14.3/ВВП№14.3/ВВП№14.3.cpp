#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "");
	cout << "Введите число : ";

	double N, K = 0, q = 0;
	cin >> N;
	for (int z = 1; z <= N; z += K) {
		K++;
		q += K;
	}
	cout << K<<endl;
	cout << "Сумма чисел равна:" << q << endl;
}