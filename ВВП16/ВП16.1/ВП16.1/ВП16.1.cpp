#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main() {
	setlocale(LC_ALL, "");
	cout << "Введите длину вашего массива : ";
	int N, q = 1;
	cin >> N;
	vector <int> a(N);
	for (int z = 0; z <= N - 1; z++) {
		cout << z + 1 << ") " << q << endl;
		q += 2;
	}
}