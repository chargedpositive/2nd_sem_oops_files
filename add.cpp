#include <iostream>

using namespace std;

void add(int a, int b)
{
	int c; 

	c = a + b;

	cout<<endl;
	
	cout<<"Sum : "<<c<<endl;
}

int main()
{
	int a, b;

	cin>>a>>b;

	cout<<"Enter two numbers : "<<a<<endl<<b;

	add(a,b);

	return 0;
}