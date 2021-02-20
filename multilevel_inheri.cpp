#include <iostream>
#include <string>

using namespace std;

class laptop
{
public:

	laptop()
	{
		cout<<"Base Class Called ."<<endl;
	}

	string name;
	float price; 

};

class gaminglaptop : public laptop
{
public:

	gaminglaptop()
	{
		cout<<"Derived Class 1 Called . "<<endl;
	}

	string name;
	int vram;
};

class gamingsystem : public gaminglaptop
{
public:
	gamingsystem()
	{
		cout<<"Derived Class 2 Called . "<<endl;
	}

};

int main()
{
	gamingsystem o1;

	return 0;
}