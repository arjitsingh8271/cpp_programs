#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter no. of element: ";
	cin>>n;
	float sum=0,arr[n],avg;
	
	cout<<"Enter "<<n<<" elements in arrays: ";
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
	}

	for (int i = 0; i < n; i++)
	{
		sum = sum + arr[i];
	}

	avg = sum / 5;

	cout<<"Total sum of element is "<<sum<<endl;
	cout<<"Average is   "<<avg<<endl;

	return 0;
}
