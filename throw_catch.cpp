#include <iostream>
#include <math.h>

using namespace std;

int main()
{ try
	{
		int a; 

		cout<<"Enter a number to find its sqrt : ";
		cin>>a;
		cout<<endl;

		if(a<0)
		{
			throw 'm';
		}


		if(a>100000)
		{
			throw 9;
		}

		
		cout<<sqrt(a);
		
	}

	catch (int x)
	{
		cout<<"\nIrrelevent input ! \n"; 
	}

	catch (char f)
	{
		cout<<f<<" is a negative number\n";
	}

	catch (...)
	{
		cout<<" Default !\n";
	}

	return 0;
}