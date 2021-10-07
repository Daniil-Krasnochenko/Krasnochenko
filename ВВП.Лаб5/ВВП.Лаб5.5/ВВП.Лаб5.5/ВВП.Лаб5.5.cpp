#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float x1, y1, x2, y2, x3, y3,a,b,c,P;//декларирование переменных
	setlocale(0, "russian");
	cout << "Введите значение координат\n";
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;//ввод значений 
	a = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	b = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2)); 
	c = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
	P = a + b + c;
	cout << "P = " << P << "\n";
	cout << "S = " << sqrt(P / 2 * (P / 2 - a) * (P / 2 - b) * (P / 2 - c));

	return 0;
}