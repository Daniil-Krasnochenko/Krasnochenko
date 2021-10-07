#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float x1, x2, y1, y2;//декларирование переменных
	setlocale(0, "russian");
	cout << "Введите значение координат\n";
	cin >> x1 >> y1 >> x2 >> y2;//ввод значений 
	cout << "P = " << 2 * (abs(x2 - x1) + abs(y2 - y1))<<"\n";
	cout << "S = " << abs(x2 - x1) * abs(y2 - y1);
	return 0;
}