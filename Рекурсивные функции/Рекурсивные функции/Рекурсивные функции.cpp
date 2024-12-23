#include <iostream>
#include <cmath>
#include <clocale>

using namespace std;

int factorial(int count) 
{
	if (count == 1 || count == 0) return 1;
	return (count * factorial(count - 1));
}

double get_sum(double num, int count)
{
	if (count  == 0) return 1;
	return (((pow(count, 2) + 1) / (factorial(count)) * pow(num / 2, count)) + get_sum(num, count - 1));
}

int main()
{
	setlocale(LC_ALL, "RU");
	int count;
	double num;

	cout << "Введите значение x:" << endl << "x = ";
	cin >> num;
	cout << "Введите количество членов ряда" << endl;
	cin >> count;
	while (count < 1)
	{
		cout << "Введите корректное количество членов ряда (натуральное число)" << endl;
		cin >> count;
	}

	cout << "Сумма членов ряда = " << get_sum(num, count-1);

	return 0;
}


