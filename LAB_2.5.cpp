#include <iostream>
using namespace std;
int main()
{	setlocale(LC_ALL, "Ru")
	int p;
	cout << "Вычисление суммы первых десяти натуральных чисел с помощью арифметической прогрессии" << endl;
	p = (float)(2 * 0 + 1 * (10 - 1)) / 2 * 10;
	cout << "Сумма: " << p;	
	return 0;
}