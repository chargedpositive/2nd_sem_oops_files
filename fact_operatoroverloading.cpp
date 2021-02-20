#include <iostream>

using namespace std;

class A
{
public:
	int i, x,f=1;

	void get()
	{
		cin>>x;
	}

	void operator !()
	{
		for(i = 1; i<=x; i++)
		{
			f = f * i;
		}
		cout<<f<<endl;
	}
};

int main()
{
	A o1;
	o1.get();
	!o1;

	return 0;

}
//do it USING FRIEND FUNCTION//