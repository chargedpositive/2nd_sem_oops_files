#include <iostream>

using namespace std;

namespace xyz
{
	int i = 5;
}

namespace pq
{
	float i = 5.4;

}

int  main()
{
	cout<<pq :: i;
	cout<<endl;
	cout<<xyz :: i;

	return 0;
}