#include <iostream>
using namespace std;

int main()
{
	int arr[2][3],i,j;

	for(i=0 ; i<2 ; i++)
	{
		for(j=0 ; j<3 ; j++)
		{
			cin>>arr[i][j];
			cout<<"\t";
		}
		cout<<endl;
	}

	cout<<"Matrix is: "<<endl;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout<<arr[i][j]<<"\t";
		}
		cout<<endl;
	}

	cout<<"Transpose of matrix is: "<<endl;
	for (int j = 0; j < 3; j++)
	{
		for (int i = 0; i < 2; i++)
		{
			cout<<arr[i][j]<<"\t";
		}
		cout<<endl;
	}

	return 0;
}