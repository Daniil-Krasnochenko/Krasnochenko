#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main() {
	setlocale(LC_ALL, "");
	cout << "Введите длину массива : ";
	int n, k, l;
	double q = 0, m = 0;
	cin >> n;
	vector <int> a(n);
	cout << "Введите диапозон элементов массива  : ";
	cin >> k >> l;
	cout << "Введите элементы массива  : ";
	for (int i = 0; i <= n - 1; i++) {
		cin >> a[i];
		if (i >= k - 1 && i <= l - 1) {

			q += a[i];
			m++;
		}
	}
	cout << "Среднее арифметическое элементов массива с номерами от K до L включительно равно  : ";
	cout << q / m << endl;
}

