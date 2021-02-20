#include <iostream>
#include <string>

using namespace std;

class cafe
{
	string a = "Chowmien";
	int aa  =  60  ;
	string b = "Momos";
	int bb  =   30 ;
	string c = "Biryani";
	int cc  =   100 ;
	string d = "Paneer Korma";
	int dd  =   50 ;
	string e = "Grilled Sandwich";
	int ee  =  35  ;
	string f = "Maharaja Burger";
	int ff  =  40  ;
	string g = "French Fries";
	int gg  =  40  ;
	string h = "Cold Drink";
	int hh  =  35  ;
	string i = "Coffee";
	int ii  =  20  ;
	string j = "Soup";
	int jj  =  40  ;
	string k = "Mineral Water";
	int kk  =  15  ;
public:
	cafe()
	{
		cout<<"            Welcome To CP Cafe "<<endl<<endl<<endl;
		cout<<"TODAY WE HAVE : "<<endl;
		cout<<"1. "<<a<<" for Rupees : "<<aa<<endl;
		cout<<"2. "<<b<<" for Rupees : "<<bb<<endl;
		cout<<"3. "<<c<<" for Rupees : "<<cc<<endl;
		cout<<"4. "<<d<<" for Rupees : "<<dd<<endl;
		cout<<"5. "<<e<<" for Rupees : "<<ee<<endl;
		cout<<"6. "<<f<<" for Rupees : "<<ff<<endl;
		cout<<"7. "<<g<<" for Rupees : "<<gg<<endl;
		cout<<"8. "<<h<<" for Rupees : "<<hh<<endl;
		cout<<"9. "<<i<<" for Rupees : "<<ii<<endl;
		cout<<"10. "<<j<<" for Rupees : "<<jj<<endl;
		cout<<"11. "<<k<<" for Rupees : "<<kk<<endl;
		
	}

};

int main()
{
	cafe o1;

	return 0;
}