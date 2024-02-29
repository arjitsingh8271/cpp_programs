// Time Complexity = O(n)

#include <bits/stdc++.h>
using namespace std;

int largest_ele(int ar[], int size);
int smallest_ele(int ar[], int size);

int main()
{
	int arr[5] = {4, 5, 3, 5, 1};

	cout<<largest_ele(arr, 5)<<endl;		// -> 5
	cout<<smallest_ele(arr, 5)<<endl;		// -> 1

	return 0;
}

int largest_ele(int ar[], int size)
{
	int largest = ar[0];

	for(int i=1 ; i<size ; i++)
	{
		if(largest < ar[i])
			largest = ar[i];
	}

	return largest;
}

int smallest_ele(int ar[], int size)
{
	int smallest = ar[0];

	for(int i=1 ; i<size ; i++)
	{
		if(smallest > ar[i])
			smallest = ar[i];
	}

	return smallest;
}