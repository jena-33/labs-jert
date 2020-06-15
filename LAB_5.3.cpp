#include <iostream>
using namespace std;

int main()
{
    int i, a, m, l, o[20];
	setlocale(LC_ALL, "Ru");
    cout << "Задайте кол-во элементов массива: ";
    cin >> a;
	cout << "Введите через пробел элементы массива в виде целых чисел: " << endl;
    for (i = 0; i < a; i++) cin >> o[i];
	m = 2147483647;
	l = -2147483648; 
	for (i = 0; i < a; i++) 
	{
		if (m > o[i]) m = o[i];
		if (l < o[i]) l = o[i];
  	}
	cout << "Наименьшее значение элемента массива " << m << endl;
	cout << "Наибольшее значение элемента массива: " << l << endl;
    return 0;
}

