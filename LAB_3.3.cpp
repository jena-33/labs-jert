#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main ()
{   setlocale(LC_ALL, "Ru")
	int a;
	srand(time(NULL));
	int b = rand() % 100;
	cout << "Игра <<Угадай число>>" << endl;
        while(a != b)
{
		cin >> b;
        if(a > b)
            cout << "Больше" << endl; 
        else if(a < b)
            cout << "Меньше" << endl; 
        else if(a == b)
        	cout << "Вы угадали число!" << endl;        
}
 	  return 0;
}


