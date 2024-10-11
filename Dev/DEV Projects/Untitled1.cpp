#include <iostream>
#include <string.h>
using namespace std;

class parking
{
	int carNumber[counter];
	string ownerName[counter];
	int counter;
	
	public:
		parking()
		{
			counter=0;
		}
		
		void addCar (int x ,string y)
		{
			carNumber[counter] = x;
			ownerName[counter] = y;
			counter++;
		}
		
		void showList()
		{
			for(int i = 0; i < counter ; i++)
			cout<<"The owner of the car "<<carNumber[i]<<" is "<<ownerName[i]<<endl;
		}
			
};

int main()
{
	parking x;
	int choice;
	cout<<"Welcome"<<endl;
	cout<<"1 = Park your car \n 2 = Show list"<<endl;
	cin>>choice;
	
	if choice == 1;
	x.addCar()
	if else choice == 2;
	x.showList()
	else 
	cout<<"Wrong Choice"<<endl;
	
	return 0;
}
