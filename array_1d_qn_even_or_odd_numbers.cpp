#include <iostream>
using namespace std;

int main()
{
	int arr[10], i;
	for (int i = 0; i < 10; i++)
	{
		cin>>arr[i];
	}

/*	for (int i = 0; i < 10; i++)   //for print entered value of arrays
	{
		cout<<"The value of arr["<<i<<"] = "<<arr[i]<<endl;
	}
*/
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] % 2 == 0)
		{
			cout<<arr[i]<<" is even no."<<endl;
		}
		else
			cout<<arr[i]<<" is odd no."<<endl;

	}
	cout<<endl;

	return 0;
}