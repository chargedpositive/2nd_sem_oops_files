#include <iostream>
#include <string>

using namespace std;

class cinema
{
public:

	string movie1 = "TITANIC"; 
	string movie2 = "SPY WORLD"; 
    string movie3 = "JOHN WICK"; 	
    
    void firstmovie()
    {
    	cout<<"Available Timing For This Movie Are : "<<endl<<endl<<"1.  10:30 a.m."<<endl<<"2.  14:30 p.m."<<endl<<"3.  19:00 p.m."<<endl;
    }

    void secondmovie()
    {
    	cout<<"Available Timing For This Movie Are : "<<endl<<endl<<"1.  08:30 a.m."<<endl<<"2.  13:00 p.m."<<endl<<"3.  18:30 p.m."<<endl;
    }

    void thirdmovie()
    {
    	cout<<"Available Timing For This Movie Are : "<<endl<<endl<<"1.  11:30 a.m."<<endl<<"2.  16:00 p.m."<<endl<<"3.  23:30 p.m."<<endl;
    }


};

int main()
{
	int a;

	cinema M1, M2, M3;

	cout<<"                              Available Movies Are : "<<endl<<"1. TITANIC"<<endl<<"2. SPY WORLD"<<endl<<"3. JOHN WICK"<<endl<<endl<<endl<<endl;

	cout<<"                          Select The Movie Number Here : "<<endl<<endl;

	cin>>a;

	cout<<endl;

	if(a == 1)
	{
		M1.firstmovie();
	}

	else if(a == 2)
	{
		M2.secondmovie();
	}

	else if(a == 3)
	{
		M3.thirdmovie();
	}
	else
	{
		cout<<"Error !"<<endl;
	}

	return 0;
}