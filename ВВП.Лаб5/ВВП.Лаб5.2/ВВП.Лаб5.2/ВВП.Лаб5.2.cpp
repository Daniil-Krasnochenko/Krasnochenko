#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float a, b, c;//декларирование переменных
	setlocale(0, "russian");
	cout << "Введите три числа\n";
	cin >> a >> b >> c;//ввод значений d
	cout << "AC = " << abs(c - a) << "\n";
	cout << "BC = " << abs(c - b) << "\n";
	cout << "AC + BC = " << abs(c - a) + abs(c - b);
	return 0;
}