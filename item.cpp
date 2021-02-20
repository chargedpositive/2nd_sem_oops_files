#include <iostream>

using namespace std;

void zeroSmaller(int &a, int &b)
{
	if(a>b)
	{
		b = 0;
	}
	else
	{
		a = 0;
	}

	cout<<"New Values Are : "<<a<<" and "<<b<<endl;

}

int main()
{
	int m, n;

	cout<<"Enter first value : ";
	cin>>m;
	cout<<"Enter second value : ";
	cin>>n;

	zeroSmaller(m, n);


	return 0;
}