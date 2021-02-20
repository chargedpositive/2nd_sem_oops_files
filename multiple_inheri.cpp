#include <iostream>
#include <string>

using namespace std;

class gamingsystem
{
public:
	gamingsystem()
	{
		cout<<"Base Class 1 Called . "<<endl;
	}

};

class laptop
{
public:

	laptop()
	{
		cout<<"Base Class 2 Called ."<<endl;
	}

	string name;
	float price; 

};

class gaminglaptop : public gamingsystem, public laptop
{
public:

	gaminglaptop()
	{
		cout<<"Derived Class Called . "<<endl;
	}

	string name;
	int vram;
};

int main()
{
	gaminglaptop o1;

	return 0;
}