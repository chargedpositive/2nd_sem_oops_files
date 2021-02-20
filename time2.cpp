#include <iostream>

using namespace std;

class time
{
public:
	int h, m, s, a, b, c;

	time()
	{
		h=0, m=0, s=0;
	}

	void getdata()
	{
		cout<<"Enter the value of Hour : ";
		cin>>h;
		cout<<endl;

		cout<<"Enter the value of Minute : ";
		cin>>m;
		cout<<endl;

		cout<<"Enter the value of Second : ";
		cin>>s;
		cout<<endl;		
	}

	void add(time t1, time t2)
	{
		s = t1.s + t2.s; 

		m = t1.m + t2.m;

		h = t1.h + t2.h;

		if(s>=60)
		{
			s = s - 60;
			m++;
		}
	
		if(m>=60)
		{
			m = m - 60;
			h++;
		}

		if(h>=24)
		{
			cout<<"error";
			cout<<"\n";
		}

		cout<<h<<":"<<m<<":"<<s<<"\n";
	}
};

int main()
{
	time t1, t2, t3;

	t1.getdata();
	t2.getdata();

	t3.add(t1, t2);

	


	return 0;
}