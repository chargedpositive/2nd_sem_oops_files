#include <iostream>

using namespace std;

void run()
{
	cout<<"Run is Running"<<endl;
}

// void run(int a)
// {
// 	cout<<"Run with int "<<a<<" is running"<<endl;
// }

void run(int a, int b=10)
{

}

void run(char a)
{

}

void run(char a, int b)
{
	
}

void run(int a, char b)
{
	
}

int main()
{
	run();
	run(5);

	return 0;
}