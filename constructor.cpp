#include <iostream>
#include <string>

using namespace std;

class laptop
{
	public :
	string name;
	float price;

	laptop()
	{
		cout<<"Name of the laptop is : "<<name<<endl<<"Price : "<<price<<endl;
	}

	laptop(string lname,float lprice)
	{
		// strcpy(name,"OMEN");.
		name = lname;
		price = lprice;

		cout<<"Name of the laptop is : "<<name<<endl<<"Price : "<<price<<endl;
	}
};

int main()
{
	laptop l;

	laptop m("OMEN",100.00);

	return 0;
}