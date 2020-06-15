#include <iostream>
using namespace std;

int main()
{
    int e, a, r, t, h[20][20], b[20][20], c[20][20];
	setlocale(LC_ALL, "ru");
    cout << "Задайте размер квадратной матрицы: ";
    cin >> r >> t;
	cout << "Введите через пробел элементы первого массива в виде целых чисел: " << endl;
    for (e = 0; e < r; e++)
		for (a = 0; a < t; a++) cin >> h[e][a];
	cout << "Введите через пробел элементы второго массива A в виде целых чисел: " << endl;
    for (e = 0; e < r; e++)
		for (a = 0; a < t; a++) cin >> b[e][a];
	for (e = 0; e < r; e++) 
		for (a = 0; a < t; a++) c[e][a] = h[e][a] + b[e][a];
 	for (e = 0; e < r; e++)
	{	
		cout << endl;
		for (a = 0; a < t; a++) cout << c[e][a] << " ";
	}	 
    return 0;
}

