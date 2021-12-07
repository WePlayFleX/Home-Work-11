#include <iostream>

using namespace std;

enum
{
	ADDITION = 1, SUBTRACTION, MULTIPLICATION, DIVISION, EXIT
};

int main()
{
	setlocale(LC_ALL, "Russian");
	int Calculator = 0;
	double a = 0, b = 0;
	double x1, x2, x3, x4;

	while (true)
	{
		cout << "Введи первое число" << endl;
		cin >> a;
		cout << "Введи второе число" << endl;
		cin >> b;
		cout << "Какая операция?" << endl;
		cin >> Calculator;

		switch (Calculator)
		{
		case ADDITION:
			x1 = a + b;
			cout << "Результат сложения - " << x1 << endl;
			break;
		case SUBTRACTION:
			x2 = a - b;
			cout << "Результат вычетания - " << x2 << endl;
			break;
		case MULTIPLICATION:
			x3 = a * b;
			cout << "Результат умножения - " << x3 << endl;
			break;
		case DIVISION:
			x4 = a / b;
			cout << "Результат деления - " << x4 << endl;
			break;
		case EXIT:
			goto _EXIT;
			break;
		default:
			cout << "Ошибка" << endl;
			break;
		}
		system("pause");
		system("cls");
	}
	_EXIT:
	return 0;
}