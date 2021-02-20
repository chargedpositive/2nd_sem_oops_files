#include <iostream>

using namespace std;

class A
{
public: 
	A()
	{
		cout<<"Base Class"<<endl<<endl;
	}
};

class B : public A
{
public:
	B()
	{
		cout<<"Single"<<endl<<endl;
	}
};

class C : public A, public B
{
public:
	C()
	{
		cout<<"Multiple"<<endl<<endl;
	}
};

class D : public B
{
public: 
	D()
	{
		cout<<"Multilevel"<<endl<<endl;
	}
};

class E : public B
{
public:
	E()
	{
		cout<<"Hierarichal"<<endl<<endl;
		
	}
};

int main()
{
	B ob;
	C ob1;
	D ob2;
	E ob3;

	return 0;
}