#include <iostream>

using namespace std;

class xyz
{
public: 

	int x; 
	void get()
	{
		cout<<"Enter the value : ";
		cin>>x;
	}

	void operator *()
	{
		cout<<x*x*x<<"\n";
	}
};

int main()
{
	xyz o1;

	o1.get();

	*o1 ;

	return 0;
}