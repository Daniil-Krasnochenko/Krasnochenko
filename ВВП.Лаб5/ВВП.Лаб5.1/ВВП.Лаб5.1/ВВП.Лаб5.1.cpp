#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float x1, y1, x2, y2, rast;//декларирование переменных
	setlocale(0, "russian");
	cout << "Введите значение координат\n";
	cin >> x1 >> y1 >> x2 >> y2;//ввод значений 
	rast = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	cout << "Расстояние между точками равно " << rast;
	// вывод значений
	return 0;
}