#include <iostream>
using namespace std;

int main()
{
	int arr[3][3],i,j,sumRow,sumCol;

	cout<<"Enter elements of a matrix"<<endl;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin>>arr[i][j];
		}
	}
	cout<<endl;

	cout<<"Your matrix is: "<<endl;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout<<arr[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<endl;

	for (int i = 0; i < 3; i++)
	{
		sumRow = sumCol = 0;
		for (int j = 0; j < 3; j++)
		{
			sumRow = sumRow + arr[i][j];
			sumCol = sumCol + arr[j][i];
		}
		cout<<"Sum of rows is: "<<sumRow<<endl;
		cout<<"Sum of columns is: "<<sumCol<<endl;
		cout<<endl;
	}

	return 0;
}