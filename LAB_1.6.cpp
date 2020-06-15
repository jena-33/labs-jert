
#include <iostream>

using namespace std;
int main()
{
    setlocale(LC_ALL, "Ru");
	int ys, mths, ds;
	cout << "Введите количество дней: ";
	cin >> ds;
	ys = ds / 365;
	mths = (ds % 365) / 30;
	ds = (ds % 365) % 30;
	cout << "Лет: " << ys << " Месяцев: " << mths << " Дней: " << ds << endl;
	return 0;
}

