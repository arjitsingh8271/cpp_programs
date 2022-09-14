// Time Complexity of Linear Search is O(n)

#include<iostream>
using namespace std;


int a[5],toSearch,count=0;

int LinearSearch();

int main()
{
	cout<<"Enter 5 elements to store in arrays: ";
	for (int i = 0; i < 5; i++)
	{
		cin>>a[i];
	}

	LinearSearch();
}

int LinearSearch()
{
	cout<<"Enter element to Search: ";
	cin>>toSearch;
	for (int i = 0; i < 5; i++)
	{
		if(a[i]==toSearch)
		{
			cout<<"Element "<<toSearch<<" found at index: ["<<i<<"]"<<endl;
			count++;
		}
	}
	
	if (count==0)
	{
		cout<<"Element "<<toSearch<<" not found"<<endl;
	}
	return 0;
}

/*
#include <iostream>          
using namespace std;

int linearSearch(int n, int arr[], int key)
{
	cout<<"Enter 5 elements to store in arrays: ";
	for (int i = 0; i < n; i++)
	{
		if(arr[i]==key)
		{
			return i;
		}
			
	}
	return -1;
}

int main() 
{
	int n;
	cin>>n;
	int arr[n];

	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
	}

	int key;
	cin>>key;

	cout<<linearSearch(n,arr,key)<<endl;


	return 0;
}
*/