//Removing Diamond Ambiguity

#include <iostream>

using namespace std;

class abc
{
public:
	int x; 

	void get()
	{
		cin>>x;
	}
};

class a1 : public virtual abc
{

};

class a2 : public virtual abc
{

};

class now : public a1, public a2
{
public:  

	void show()
	{
		cout<<"\n"<<x; 
	}

};

int main()
{
	now n; 

	n.get();

	n.show();

	return 0;
}