#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Ru");
    int f, u, c, k[20];
	float v;
    cout << "Задайте кол-во элементов массива: ";
    cin >> u;
	cout << "Введите через пробел элементы массива в виде целых чисел: " << endl;
    for (f = 0; f < u; f++) cin >> k[f]; 
	c = 0; v = 0;
	for (f = 0; f < u; f++) c = c + k[f];
	if (u != 0) v = (float)c / u;
	cout << "Сумма элементов массива: " << c << endl;
	cout << "Среднее значение элементов массива: " << v << endl;
    return 0;
}
