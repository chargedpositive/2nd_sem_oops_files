#include <iostream>

using namespace std;

int main()
{
	int n, d, sum;

	cin>>d>>n;

	for(int i = 1; i<=d; i++)
	{
		sum = 0 ;
		
		for(int j = 1; j<=n; j++)
		{
			sum = sum + j;
		} 

		n = sum;
	}

	cout<<sum;

	return 0;
}