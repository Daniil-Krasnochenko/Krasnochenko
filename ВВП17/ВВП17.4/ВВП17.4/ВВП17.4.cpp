#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main() {
	setlocale(LC_ALL, "");
	cout << "Введите длину массива : ";
	int n, k, min = 10000;
	double q = 0, m = 0;
	cin >> n;
	vector <int> a(n);
	cout << "Введите элементы массива  : ";
	for (int i = 0; i <= n - 1; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n - 2; i++) {
		if (a[i] > a[i + 1] && a[i] > a[i - 1] ) {
			min = i + 1;
		}
	}
	cout << "Последний локальный максимум равен : " << min << endl;
}
