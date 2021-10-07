#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float a, b, a1, b1;//декларирование переменных
	setlocale(0, "russian");
	cout << "Введите два числа\n";
	cin >> a >> b;//ввод значений d
	a1 = pow(a, 2);
	b1 = pow(b, 2);
	cout << a << "^2" << " + " << b << "^2 = " << a1 + b1 << "\n";
	cout << a << "^2" << " - " << b << "^2 = " << a1 - b1 << "\n";
	cout << a << "^2" << " * " << b << "^2 = " << a1 * b1 << "\n";
	cout << a << "^2" << " / " << b << "^2 = " << a1 / b1;// вывод значений
	return 0;

}