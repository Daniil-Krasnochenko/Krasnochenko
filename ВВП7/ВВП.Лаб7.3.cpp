#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
	double A, X, Y;
	setlocale(LC_ALL, "");
	cout << "Введите количество конфет в килограммах: \n";
	cin >> X;
	cout << "Введите стоимость "<< X <<" килограммов конфет : \n";
	cin >> A;
	cout << "Введите количество конфет Y в килограммах: \n";
	cin >> Y;
	cout << "Один килограмм конфет стоит: " << A / X << "\n";
	cout << Y << " килограмм конфет стоит: " << A / X * Y;
	return 0;

}