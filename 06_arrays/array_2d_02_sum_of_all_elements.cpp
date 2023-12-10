#include <iostream>
using namespace std;

int main()
{
	int arr[2][3], sum = 0;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin>>arr[i][j];
		}
	}

	cout<<"Your 2D arrays is: "<<endl;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout<<arr[i][j]<<"\t";
			sum = sum + arr[i][j];
		}
		cout<<endl;
	}

	cout<<"Sum of all array elements is: "<<sum<<endl;

	return 0;
}