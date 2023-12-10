#include <iostream>
#define n 100
using namespace std;


int main()
{
	int arr1[n][n],arr2[n][n],arr3[n][n],r1,c1,r2,c2,multi,k;

	cout<<"Enter 1st matrix rows and coloums: "<<endl;
	cin>>r1>>c1;

	for (int i = 0; i < r1; i++)
	{
		for (int j = 0; j < c1; j++)
		{
			cin>>arr1[i][j];
		}
	}

	cout<<"Enter 2st matrix rows and coloums: "<<endl;
	cin>>r2>>c2;

	for (int i = 0; i < r2; i++)
	{
		for (int j = 0; j < c2; j++)
		{
			cin>>arr2[i][j];
		}
	}
	cout<<endl;

	cout<<"Your 1st matrix is: "<<endl;

	for (int i = 0; i < r1; i++)
	{
		for (int j = 0; j < c1; j++)
		{
			cout<<arr1[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<endl;

	cout<<"Your 2st matrix is: "<<endl;

	for (int i = 0; i < r2; i++)
	{
		for (int j = 0; j < c2; j++)
		{
			cout<<arr2[i][j]<<"\t";
		}
		cout<<endl;
	}

	// Multiplication process

	for (int i = 0; i < r1; i++)
	{
		for (int j = 0; j < c2; j++)
		{
			multi = 0;
			
			for (int k = 0; k < c1; k++)
			{
				multi = multi + arr1[i][k] * arr2[k][j];
			}

			arr3[i][j] = multi;
		}
	}
	cout<<endl;
	cout<<"Multiplication of two matrice is: "<<endl;

	for (int i = 0; i < r1; i++)
	{
		for (int j = 0; j < c2; j++)
		{
			cout<<arr3[i][j]<<"\t";
		}
		cout<<endl;
	}

	cout<<endl;

	return 0;
}