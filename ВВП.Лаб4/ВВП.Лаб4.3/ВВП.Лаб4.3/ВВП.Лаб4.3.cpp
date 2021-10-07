#include <iostream>
using namespace std;
int main()
{
	int a, b ;
	float c ;//декларирование переменных
	setlocale(0, "russian");
	cout << "Введите два числа\n";
	cin >> a >> b;//ввод значений a ,b 
	c = (a+b)/2.0;// присваивание переменной c значения среднего арифметического
	cout <<"Среднее арифметическое равно " << c;// вывод значения переменной c
	return 0;

}