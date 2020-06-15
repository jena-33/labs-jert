#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Ru");
    int b, r, o[20];
    cout << "Задайте кол-во элементов массива: ";
    cin >> r;
	cout << "Введите через пробел элементы массива в виде целых чисел: " << endl;
    for (b = 0; b < r; b++) cin >> o[b]; 
    for (b = 0; b < r / 2; b++) swap(o[b], o[r-b-1]); 
    cout << endl;
    for (b = 0; b < r; b++) cout << o[b] << " "; 
    cout << endl;
    return 0;
}
