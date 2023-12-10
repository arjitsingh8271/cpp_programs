/*
Iput size : 	5
Input : 		{5 2 7 9 3}
Input position : 3
Output : 		{5 2 9 3}
*/

# include <iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter no. of element in an array: ";
	cin>>n;

	int arr[n];
	cout<<"Enter "<<n<<" elements in array: ";
	for(int i=0 ; i<n ; i++)
	{
		cin>>arr[i];
	}

	int pos;
	cout<<"Enter the position of the array element where you want to delete: ";
	cin>>pos;
	if((pos<0) || (pos>n))		// check whether the deletion is possible or not  
	{
		cout<<"Deletion is not posible in the array."<<endl;
		return 0;
	}
	else						// use for loop to delete the element and update the index  
	{
		for(int i=pos-1 ; i<n-1 ;i++ )
		{
			arr[i]=arr[i+1];
		}
	}

	cout<<"Result"<<endl;
	for(int i=0 ; i<n-1 ; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}