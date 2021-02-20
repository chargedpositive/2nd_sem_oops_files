#include <iostream>
#include <string>

using namespace std;

class employ
{
	public :

	string name;
	string emp_number;

	void getdata()
	{
		cout<<"Enter the Name of the Employ : ";
		cin>>name;
		cout<<endl;

		cout<<"Enter the Alloted Number of the Employ : ";
		cin>>emp_number;
		cout<<endl;
	}

	void putdata()
	{
		cout<<"Name : "<<name<<endl;
		cout<<"Employ Number : "<<emp_number<<endl;
	}
};

int main()
{
	employ info[10];
	for(int i=0; i<10; i++)
	{
		info[i].getdata();
	}

	for(int i=0; i<10; i++)
	{
		info[i].putdata();
	}

	return 0;
}