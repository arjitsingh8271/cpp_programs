/*
Selection Sort Algorithm:

1. Divide the list into a sorted and an unsorted region.
2. Find the smallest (or largest) element in the unsorted 
region and swap it with the first unsorted element.
3. Move the boundary between the sorted and unsorted regions 
one element to the right.

OR

1. Start with the first element of the array as the minimum.
2. Compare this element with the rest of the elements to find the smallest element in the unsorted portion.
3. Swap the found minimum element with the first element.
4. Move the boundary of the sorted and unsorted portions one element to the right.
5. Repeat the process for the remaining elements in the unsorted portion.

	T.C
	---
		Best Case  = O(n^2)
		Avg Case   = O(n^2)
		Worst Case = O(n^2)

	S.C = O(1)
	----------

*/


# include<iostream>
using namespace std;

void selection_sort(int ar[], int n)
{
	for(int i=0 ; i<n-1 ; i++)	// we need n-2 pass
	{
		int min = i;

		for(int j=i+1 ; j<n ; j++)
		{
			if( ar[j] < ar[min])
				min = j;	// update the index of min ele
		}

		if (min != i)
		{
			int temp = ar[i];
			ar[i] = ar[min];
			ar[min] = temp;
		}
	}
}


int main()
{
	int arr[6] = {2,7,4,1,5,3};

	for (int x:arr)
		cout<<x<<" ";
	cout<<endl;

	selection_sort(arr, 6);

	for (int x:arr)
		cout<<x<<" ";
	cout<<endl;
}


/*
OUTPUT:	2 7 4 1 5 3                                                           
		1 2 3 4 5 7
*/

