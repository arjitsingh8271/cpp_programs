/*

a[] = {1, 2, 6, 6, 5}

largest = a[0]	1 	then	sec_largest = INT_MIN
		= a[1]	2 	then				= 1 	i.e (largest)
		= a[3]  6 	then				= 2 	i.e (largest)

if (a[4] < largest && a[4] > sec_largest)
										= 5
		--------------------------------------------

a[] = {1, 2, 6, 6, 5}

smallest = a[0]	1 	then	sec_smallest = INT_MAX
		   
if (a[1] != smallest && a[1] < sec_smallest)
										 = 2

Time Complexity = O(n)

*/


#include <bits/stdc++.h>
using namespace std;

int sec_largest_ele(int ar[], int size);
int sec_smallest_ele(int ar[], int size);

int main()
{
	int arr[5] = {1, 2, 6, 6, 5};

	cout<<sec_largest_ele(arr, 5)<<endl;		// -> 5
	cout<<sec_smallest_ele(arr, 5)<<endl;		// -> 2

	return 0;
}

int sec_largest_ele(int a[], int size)
{
	int largest = a[0];
	int sec_largest = INT_MIN;

	for(int i=1 ; i<size ; i++)
	{
		if(a[i] > largest)
		{
			sec_largest = largest;
			largest = a[i];
		}

		else if (a[i] < largest && a[i] > sec_largest)
			sec_largest = a[i];
	}

	return sec_largest;
} 

int sec_smallest_ele(int a[], int size)
{
	int smallest = a[0];
	int sec_smallest = INT_MAX;

	for(int i=1 ; i<size ; i++)
	{
		if(a[i] < smallest)
		{
			sec_smallest = smallest;
			smallest = a[i];
		}

		else if(a[i] != smallest && a[i] < sec_smallest)
			sec_smallest = a[i];
	}

	return sec_smallest; 
} 