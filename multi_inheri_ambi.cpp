//Removing Ambiguity In Multiple Inheritance
#include <iostream>

using namespace std;

class abc
{
public:
	int x; 

	abc()
	{
		cout<<"Base Class 1 Called"<<endl;
	}

	void getdata()
	{
		cin>>x; 
		cout<<x+4<<endl;
	}
};

class xyz
{
public:
	int y;

	void getdata()
	{
		cin>>y;
		cout<<y+2<<endl;
	}

	xyz()
	{
		cout<<"Base Class 2 Called "<<endl;
	}
};

class b1 : public abc, public xyz
{
public:
	b1()
	{
		cout<<"Derived Class Called"<<endl;
	}
};

int main()
{
	b1 o1;

	o1.abc::getdata();

	o1.xyz::getdata();


	return 0;
}