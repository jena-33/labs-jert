#include <iostream>
using namespace std;
int main()
{	setlocale(LC_ALL, "Ru")
	char c;
	cout << "Введите символ: ";
	cin >> c;
	int s = (int)с;
	if (s >= 48 && s <= 57)
		cout << "|0 – 9|48 – 57|: " << s; 
	else if (s >= 65 && s <= 90)
		cout << "|A – Z|65 – 90|: " << s;
	else if (s >= 97 && s <= 122)
		cout << "|a – z|97 – 122|: " << s; 
	else if (s >= 0 && s <= 47 | s >= 58 && s <= 64 | s >= 91 && s <= 96 | s >= 123 && s <= 127)
		cout << "|Специальные символы|0 - 47, 58 - 64, 91 - 96, 123 – 127|: " << s; 
	else
		cout << "|-|-|: " << s; 
	return 0;
}
