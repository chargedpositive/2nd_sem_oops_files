#include <iostream>

using namespace std;

class abc
{
public:
	int x; 

	void get()
	{
		cout<<"Enter the value : ";
		cin>>x;
	}

	void operator +(abc k)
	{
		cout<<"Answer is : "<<x * k.x;
	}

	friend void operator -(double y, abc f);
};

void operator-(double y, abc f)

{
	cout<<"Answer is :"<< y + f.x;
}

int main()
{
	abc o1, o2;

	o1.get();
	o2.get();

	o1 + o2;

	int y;

	cout<<"\n"<<"Enter the next value : ";
	cin>>y;

	y - o1;

	return 0;
}