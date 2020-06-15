#include <iostream>
using namespace std;
int main()
{   setlocale(LC_ALL, "Ru")
    int num;
    int s = 0;
 
    cout << "Введите целое число для нахождения суммы цифр, num = ";
    cin >> num;
    while (num != 0)
    {
        s += num % 10; 
        num /= 10; 
    }
    cout << "Сумма: " << s << endl;
    return 0;
}
