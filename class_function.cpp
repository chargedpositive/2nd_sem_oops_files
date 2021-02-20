#include <iostream>
#include <string>

using namespace std;

class laptop
{
public:

	string name;
	string processor;

	void run()
	{
		cout<<"void run is running"<<"\n";
	}

	void run(int a)
	{
		cout<<"int "<<a<<" is running"<<endl;
	}

};

int main()
{
	laptop l1;

	l1.run();
	l1.run(5);

	return 0;
}