#include <iostream>

using namespace std;

class rational
{
public:

	int p, q;

	void getdata()
	{
		cout<<"Enter the value of numerator : ";
		cin>>p;
		cout<<endl;

		cout<<"Enter the value of denominator : ";
		cin>>q;
		cout<<endl;

		cout<<"Hence the rational number is : "<<p<<"/"<<q<<endl;
	}

	void add(rational r1, rational r2)
	{
		p = (r1.p * r2.q) + (r2.p * r1.q);
		q = r1.q * r2.q;

		cout<<"Sum of rational number will be : "<<p<<"/"<<q<<endl;
	}

};

int main()
{
	rational r1, r2, r3;

	r1.getdata();
	cout<<endl;

	r2.getdata();
	cout<<endl;
	
	r3.add(r1 , r2);
	cout<<endl;

	return 0;
}