#include <iostream>
#include <stdlib.h>
using namespace std;

int showChoice()
{	
	system("cls");
	cout << "Выберете меню вводом соответствующей цифры 1-4, и нажмите ENTER, для выполнения арифметической операции.";
	cout << "Потом введите 2 числа и нажмите ENTER.\nНиже будет результат вашего запроса.";
	cout << "Для возврата в главное меню нажмите любую клавишу.\n";
	cout << "1. (Add) Сложение.\n";
	cout << "2. (Substruct) Вычитание.\n";
	cout << "3. (Multiply) Умножение\n";
	cout << "4. (Divide) Деление\n";
	cout << "5. Закрыть программу\n";
	return 0;
}

float add(float n, float m)
{
	return n + m;
}

float substruct(float n, float m)
{
	return n - m;
}

float multiply(float n, float m)
{
	return n * m;
}

float divide(float n, float m)
{
	return n / m;
}

int main()
{
	int x = 0;
	float n, m;
	setlocale(LC_ALL, "Ru");
	while (1)
		switch (x)
		{
			case 1:
				cout << add(n, m) << endl;
				system("pause");
				x = 0;
				break;
			case 2:
				cout << substruct(n, m) << endl;
				system("pause");
				x = 0;
				break;
			case 3:
				cout << multiply(n, m) << endl;
				system("pause");
				x = 0;
				break;
			case 4:
				cout << divide(n, m) << endl;
				system("pause");
				x = 0;
				break;
			case 5:
				return 0;		
			default:;
				showChoice();
				cin >> x;
				if (x != 5) cin >> n >> m;
		}
}

