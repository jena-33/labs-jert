
#include <iostream>
using namespace std;

void main()
{
    setlocale(LC_ALL, "RUS");
    char s;
    cout << "Введите символ\n";
    cin >> s; 
    cout << "Код символа:\n" <<int(s);
    
}
