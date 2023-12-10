/*
Iput size : 	5
Input : 		{5 2 7 9 3}
Input element : 7
Output : 		{5 2 9 3}
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

	int key,pos=0;
	cout<<"Enter element of the array that you want to delete: ";
	cin>>key;

	for(int i=0 ; i<n ; i++)
	{
		if(key == arr[i])
		{
			pos=i;
			break;
		}
	}

	for(int i=pos ; i<n-1 ; i++)
	{
		arr[i]=arr[i+1];
	}

	cout<<"Result"<<endl;
	for(int i=0 ; i<n-1 ; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;

}


// Without Position veriable


// # include <iostream>
// using namespace std;
 
// int main()
// {
// 	int n;
// 	cout<<"Enter no. of element: ";
// 	cin>>n;
// 	int arr[n];
// 	cout<<"Enter "<<n<<" elements in array: ";
// 	for (int i=0; i < n; i++)
// 	{
// 		cin>>arr[i];
// 	}

// 	int key,i;
// 	cout<<"Enter element of the array that you want to delete: ";
// 	cin>>key;

// 	for(i=0 ; i<n ; i++)
// 	{
// 		if(key == arr[i])
// 			break;
// 	}

// 	for(int j=i ; j<n-1 ; j++)
// 	{
// 		arr[j]=arr[j+1];
// 	}

// 	cout<<"Result"<<endl;
// 	for(int j=0 ; j<n-1 ; j++)
// 	{
// 		cout<<arr[j]<<" ";
// 	}
// 	cout<<endl;

// }


