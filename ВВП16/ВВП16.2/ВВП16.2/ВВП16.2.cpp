#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main() {
	setlocale(LC_ALL, "");
	cout << "Введите длину вашего массива : ";
	int A, D, N, q = 0;
	cin >> N;
	cout << "Введите первый элемент геометрической прогрессии : ";
	cin >> A;
	cout << "Введите знаменатель геометрической прогрессии : ";
	cin >> D;
	vector <int> a(N);
	for (int z = 0; z <= N - 1; z++) {
		q = A * pow(D, z);
		cout << z + 1 << ") " << q << endl;
	}

}