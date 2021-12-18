#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main() {
	setlocale(LC_ALL, "");
	cout << "Введите длину вашего массива : ";
	int A, B, N, q = 0;
	cin >> N;
	vector <int> a(N);
	int m = N - 1;
	cout << "Введите элементы массива : ";
	for (int z = 0; z <= N - 1; z++) {
		cin >> a[z];
	}
	for (int z = 0; z <= N - 1; z++) {
		if (z < m) {
			cout << a[z] << endl << a[m] << endl;
			m--;
		}
		else if (z = m) {
			cout << a[z] << endl;
			break;
		}
	
	}
}