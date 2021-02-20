#include <iostream>

using namespace std;

int main()
{
	int arr[] = {5, 4, 1, 3, 2};
	int min, temp;
	int size = 5;

	cout<<"Unsorted array is : ";
	for(int i = 0; i<size; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	for(int i=0 ; i< size- 1; i++)
	{
		min = i; 

		for(int j=i+1; j<size; j++)
		{
			if(arr[min]>arr[j])
			{
				min = j;
			}
		}

		temp = arr[min];
		arr[min] = arr[i]; 
		arr[i] = temp;

	}

	cout<<"Sorted Array Is : ";
	for(int k = 0; k<size; k++)
	{
		cout<<arr[k]<<" ";
	}
	cout<<endl;

	return 0;
}