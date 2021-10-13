#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a, b;
	setlocale(0, "russian");
	cout << "Введите два числа\n";
	cin >> a >>b ;//ввод значений 
	swap(a,b);
	cout << a << " " << b;
	// вывод значений
	return 0;
}