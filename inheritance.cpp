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