#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double A, x, B;
	setlocale(LC_ALL, "");
	cout << "Введите значение коэфициентов А и В: \n";
	cin >> A >> B;
	cout << A << "x + (" << B << ") = 0\n";
	cout << "x равен " << -B / A;
	return 0;
}