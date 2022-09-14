#include <iostream>
using namespace std;

int main()
{
	int arr[3][3];

	cout<<"Enter 3x3 : ";

	// for (int i = 0; i < 3; i++)    // using for loop
	// {
	// 	for (int j = 0; j < 3; j++)
	// 	{
	// 		cin>>arr[i][j];
	// 	}
	// }

	for(auto &x:arr)     // using for each loop
	{
		for(auto &y:x)
		{
			cin>>y;
		}
	}

	// for (int i = 0; i < 3; i++)    // using for loop
	// {
	// 	for (int j = 0; j < 3; j++)
	// 	{
	// 		cout<<arr[i][j]<<" ";
	// 	}
	// 	cout<<endl;
	// }

	for(auto &x:arr)     // using for each loop
	{
		for(auto &y:x)
		{
			cout<<y<<" ";
		}
		cout<<endl;
	}

	return 0;
}