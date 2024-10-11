#include <iostream>
using namespace std;

int main ()
{
	int number = 1234;
	string x;
	int size = sizeof(number)/sizeof(int);
	for (int i = 0 ; i < size ; i++)
	{
		cout<<number%size;
	}
	
	
	
	return 0;
}
