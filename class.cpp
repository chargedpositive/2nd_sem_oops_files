#include <iostream>
#include <string>

using namespace std;

class laptop
{
	public :

	string laptopName;
	string laptopBrand;
	float laptopPrice;
	string laptopProcessor;

	void getdata()
	{
		cin>>laptopName;
		cout<<endl;
		cin>>laptopBrand;
		cout<<endl;
		cin>>laptopPrice;
		cout<<endl;
		cin>>laptopProcessor;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
	}

	void startUp()
	{
		cout<<laptopName<<" Laptop Has Started!"<<endl;
	}

	void showdata()
	{
		cout<<"This Is "<<laptopName<<" Laptop";
		cout<<endl;
		cout<<"It Is "<<laptopBrand<<" Series";
		cout<<endl;
		cout<<"It Costs "<<laptopPrice<<"/- Only";
		cout<<endl;
		cout<<"It Has "<<laptopProcessor<<" Inside To Perform Like A Beast";
		cout<<endl;
	}

	void shutDown()
	{
		cout<<laptopName<<" Laptop Has Been Shut Down!"<<endl;
	}
};

int main()
{
	laptop l1;

	l1.getdata();

	l1.startUp();

	l1.showdata();

	l1.shutDown();

	return 0;
}