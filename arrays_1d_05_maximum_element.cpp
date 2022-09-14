#include <iostream>
#include <climits> 
using namespace std;

int main()
{
	int n;
	cout<<"Enter no of element you want to store in arrays: ";
	cin>>n;
	int a[n];

	for (int i = 0; i < n; i++)
	{
		cin>>a[i];
	}

	int max=INT_MIN;  // for maximum to compare all +ve no. as well as -ve no. 
	// int max=INT_MAX  // for minimum

	// for (int i = 0; i < n; i++)   // for loop
	// {
	// 	if (a[i]>max)
	// 	{
	// 		max=a[i];
	// 	}
	// }

	for(int x:a)  // for each loop
	{
		if(x>max)
		{
			max=x;
		}
	}

	cout<<"Maximum value in arrays is: "<<max<<endl;

	return 0;
}
