#include <iostream>

using namespace std;

class INT
{
public:
	int x;

	INT (int m)
	{
		x = m;
	}

	INT()
	{
		x = 0;
	}

	INT operator +(INT b)
	{
		INT c;
		c.x = x * b.x;

		return c;
	}

	void display()
	{
		cout<<"\n"<<"Ans : "<<x<<endl;
	}

};

int main()
{
	INT a = 5, b = 6;

	INT c;

	c = a + b;

	c.display();

	return 0;
}