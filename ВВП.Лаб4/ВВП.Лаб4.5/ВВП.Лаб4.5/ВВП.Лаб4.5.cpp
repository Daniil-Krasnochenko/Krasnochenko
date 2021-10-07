#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float a, b, a1, b1;//декларирование переменных
	setlocale(0, "russian");
	cout << "Введите два числа\n";
	cin >> a >> b;//ввод значений d
	a = abs(a);
	b = abs(b);
	cout << a << " + " << b << " = " << a + b << "\n";
	cout << a << " - " << b << " = " << a - b << "\n";
	cout << a << " * " << b << " = " << a * b << "\n";
	cout << a << " / " << b << " = " << a / b;// вывод значений
	return 0;
}