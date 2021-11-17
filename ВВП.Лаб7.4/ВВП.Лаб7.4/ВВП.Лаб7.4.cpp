#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double S, V1, V2, T ;
	setlocale(LC_ALL, "");
	cout << "Введите значение скоростей V1 км/ч, V2 км/ч, начального расстояния S км и времени T часов:\n ";
	cin >> V1 >> V2 >> S >> T;
	cout << "Расстояние между двумя автомобилями равно " << (V1 + V2) * T + S << " км";
	return 0;
}