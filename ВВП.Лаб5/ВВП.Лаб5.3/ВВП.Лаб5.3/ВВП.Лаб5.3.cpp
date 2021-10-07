#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float a, b, c;//декларирование переменных
	setlocale(0, "russian");
	cout << "Введите три числа\n";
	cin >> a >> b >> c;//ввод значений
	if (abs(a - b) == abs(a - c) + abs(b - c)) {
		cout << "AC = " << abs(c - a) << "\n";
		cout << "BC = " << abs(c - b) << "\n";
		cout << "AC * BC = " << abs(c - a) * abs(c - b);
	}
	else
		cout << "Введённые значения не удовлетворяют условию: Точка С расположена между А и В";

	return 0;
}