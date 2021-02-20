#include <iostream>

using namespace std;

class A
{
public:

	int x; 
	void get()
	{
		cin>>x;
	}

	void increment()
	{
		cout<<++x<<endl;
	}

	void operator ++()
	{
		cout<<++x<<"\n";
	}
};

int main()
{
	A ob;
	ob.get();
	ob.increment();	
	++ob;

	return 0 ;
}