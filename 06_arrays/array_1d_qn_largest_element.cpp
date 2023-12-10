#include <iostream>
#include <climits> 
using namespace std;

int main()
{
	int n;
	cout<<"Enter no of element you want to store in arrays: ";
	cin>>n;
	int a[n];

	cout<<"Enter "<<n<<" elements in arrays: ";
	for (int i = 0; i < n; i++)
	{
		cin>>a[i];
	}

	// int max = -1;
	// for (int i=0 ; i<n ; i++)
	// {
	// 	if(a[i] > max)
	// 		max = a[i];
	// }

	int max=INT_MIN;  // for largest to compare all +ve no. as well as -ve no. 
	// int max=INT_MAX  // for largest

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

	cout<<"largest value in arrays is: "<<max<<endl;

	return 0;
}
