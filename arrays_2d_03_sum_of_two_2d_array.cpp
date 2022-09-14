#include <iostream>
using namespace std;

int main()
{
	int arr1[2][2],arr2[2][2],arr3[2][2],i,j;

	cout<<"Enter 1st array elements"<<endl;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cin>>arr1[i][j];
		}
	}

	cout<<"Enter 2st array elements"<<endl;
	
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cin>>arr2[i][j];
		}
	}

	cout<<"Sum of 1st and 2nd Arrays is: "<<endl;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			arr3[i][j] = arr1[i][j] + arr2[i][j];
		}
	}

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout<<arr3[i][j]<<"\t";
			
		}
		cout<<endl;
	}

	return 0;
}