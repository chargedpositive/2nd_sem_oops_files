#include <iostream>

using namespace std;

class rectangle
{
public:
	int length;
	int breadth, area;

	rectangle(int len, int bre)
	{
		length = len;
		breadth = bre;

		area = length * breadth ;

		cout<<"Area : "<<area<<endl;
	}

};

int main()
{
	int a, b;

	cout<<"Enter the value of Length : ";
	cin>>a;
	cout<<"Enter the value of Breadth : ";
	cin>>b;

	rectangle r1(a,b);

	return 0;
}