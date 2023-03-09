/*
#include <iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter no of element you want to store in arrays: ";
	cin>>n;

	int arr[n];

	cout<<"Enter "<<n<<" elements in arrays: ";
	for (int i = 0; i < n; i++)
	{	
		cin>>arr[i];
	}
	// without loop input ---->   cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];
	cout<<endl;

	for (int i = 0; i < n; i++)
	{
		cout<<"The elements of arr["<<i<<"] = "<<arr[i]<<endl;
	}
	// without loop output ---->     cout<<arr[0]<<endl;
	//                               cout<<arr[1]<<endl;
	//                               cout<<arr[2]<<endl;
	//                               cout<<arr[3]<<endl;
	cout<<endl;

	return 0;
}
*/

//TAKING INPUT AND PRINT REVERSE ORDER


#include <iostream>
using namespace std;

int main()
{
	int n,i=0;
	cout<<"Enter no of element you want to store in arrays: ";
	cin>>n;

	int arr[n];

	cout<<"Enter "<<n<<" elements in arrays: ";
	for (i = 0; i < n; i++)            // for loop
	{	
		cin>>arr[i];
	}

	// for(auto &x:arr)                // for each loop
	// {   
	// 	cin>>x;
	// }

	for (i = 0; i < n; i++)            // for loop
	{
		cout<<"The elements of arr["<<i<<"] = "<<arr[i]<<endl;
	}

	// for(auto x:arr)                 // for each loop
	// { 
	// 	cout<<"The elements of arr["<<i++<<"] = "<<x<<endl;
	// }

	return 0;
} 


