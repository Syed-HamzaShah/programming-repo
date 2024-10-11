#include <iostream>
using namespace std;

void range(int x , int y)
{
	int sum;
	for (int i = x; i <= y; i ++ )
	{
		if (i%2 != 0)
		sum = sum + i;
	}
	cout<<"the sum of the odd numbers in this range is" <<sum;
}

int main()
{
	int x,y;
	cout<<"Enter the start of the range";
	cin>>x;
	cout<<"Enter the end of the range";
	cin>>y;
	range(x,y);


	return 0;
}
