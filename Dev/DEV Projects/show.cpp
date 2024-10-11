#include <iostream>
using namespace std;

class a
{
	public:	
	string name;	
	int age;
	
	string n(string x)
	{
		name = x ;
		return name;
	}	
	
	int ag(int x)
	{
		age = x;
		return age;
	}
	
	void show()
	{
		cout<<name<<endl;
		cout<<age;
	}
	
};

int main()
{
	a abc;
	abc.ag(24);
	abc.n("HAmza");
	
	
	return 0;
}
