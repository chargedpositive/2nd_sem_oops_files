#include <iostream>
#include <string>

using namespace std;

class complex
{
	public:
		int r;
		int i;

		void getdata()
		{
			cout<<"Input the value of r : ";
			cin>>r;
			cout<<endl;

			cout<<"Input the value of i : ";
			cin>>i;
			cout<<endl;
		}

		void add(complex o1, complex o2)
		{
			r = o1.r + o2.r;
			i = o1.i + o2.i;

			cout<<"Sum : "<<r<<" + i"<<i<<endl;
		}



};

int main()
{
	complex o1, o2, o3; 

	o1.getdata();
	o2.getdata();

	o3.add(o1, o2);

	return 0;
}