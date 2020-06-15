
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Ru");
    int f;
    cout << "Введите температуру в фаренгейтах\n";
    cin >> f;
    int c;
    c = (f - 32) * 5 / 9;
    cout << "Tемпература в цельсиях:" << c;
    return 0;
}

