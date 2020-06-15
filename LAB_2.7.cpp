#include <iostream>
using namespace std;
const int n = 20;
int main()
{
	setlocale(LC_ALL, "Ru");
    int j, m, a[20], x = 0, y = 0, z = 0;
	cout << "Введите кол-во элементов: ";
    cin >> m;
    for (j = 0; j < m; j++) cin >> a[j];
	for (j = 0; j < m; j++)
		if (a[j] < 0)
			x++;
		else if (a[j] > 0)
			y++;
		else
			z++;
    cout << "Негативных: " << x << " Позитивных: " << y << " Нули: " << z << endl;
    return 0;
}
