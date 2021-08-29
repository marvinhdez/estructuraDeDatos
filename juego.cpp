#include <iostream>
#include <conio.h>
#include <ctime>
using namespace std;

int main()
{
	
	srand(time(NULL));
	int resultado=1;
	while(resultado)
	{
		cout << 1+ rand()%5 <<endl;
		system("pause");
	}
}
