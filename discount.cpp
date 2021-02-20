#include <iostream>
#include <string>

using namespace std;

class item
{
public:

	int item_no;

	string name;

	float price;

};

class discounted_item : public item
{
public:

	void Showingdata()
	{
		cout<<"                                     Welcome To Flavour's Love  "<<endl<<endl;

		cout<<"Have A Look On Our Menu : "<<endl<<endl<<"S.no.    Item ID      Item Name     Price"<<endl<<"1.       1101         MOMOS         50/-"<<endl<<"2.       1102         MOJITO        45/-"<<endl<<"3.       1103         CHOWMIEN      70/-"<<endl<<"4.       1104         FRIES         60/-"<<endl<<"5.       1105         COFFEE        30/-"<<endl;



	}
};

int main()
{
	discounted_item o1;
	o1.Showingdata();


	return 0;
}