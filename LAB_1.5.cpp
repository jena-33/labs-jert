

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Ru");
    int n;
    cout << "Введите число\n";
    cin >> n;
    if (n < 0)
        cout << "Отрицательное";
    if (n > 0)
        cout << "Положительное";
    else
        cout << "Ноль";
    return 0;
}

