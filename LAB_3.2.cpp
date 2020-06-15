#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main ()
{
	srand(time(NULL));
	int x = rand() % 90 + 10;
	cout << x;
    return 0;
}

