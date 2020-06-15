#include <iostream>
using namespace std;

int main()
{
    int l, u, c, k[20][20], p, r;
	setlocale(LC_ALL, "Rus");
    cout << "Задайте размер квадратной матрицы: ";
    cin >> c;
	cout << "Введите через пробел элементы массива в виде целых чисел: " << endl;
    for (l = 0; l < c; l++)
		for (u = 0; u < c; u++) cin >> k[l][u];
	p = 0; r = 0;
	for (l = 0; l < c; l++) p = p + k[l][l];
	for (l = 0; l < c; l++) r = r + k[l][c-l-1];
	cout << "Сумма левой диагонали матрицы: " << p << endl;
	cout << "Сумма правой диагонали матрицы: " << r << endl;
    return 0;
}


