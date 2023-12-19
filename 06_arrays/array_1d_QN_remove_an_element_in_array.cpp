/*
Iput size : 	5
Input : 		{5 2 7 9 3}
Input element : 7
Output : 		{5 2 9 3}

Iput size : 	5
Input : 		{5 2 9 3 2}
Input element : 2
Output : 		{5 9 3}
*/


# include <iostream>
using namespace std;
 
int main()
{
	int n;
	cout<<"Enter no. of element: ";
	cin>>n;
	int arr[n];
	cout<<"Enter "<<n<<" elements in array: ";
	for (int i=0; i < n; i++)
	{
		cin>>arr[i];
	}

	int key;
	cout<<"Enter element of the array that you want to delete: ";
	cin>>key;

	for(int i=0 ; i<n ; i++)
	{
		if(key == arr[i])
		{
			for(int j=i; j<n; j++)
				arr[j]=arr[j+1];
			n--;
			i--;
		}
	}

	cout<<"Result: "<<endl;
	for(int i=0 ; i<n ; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;

}



