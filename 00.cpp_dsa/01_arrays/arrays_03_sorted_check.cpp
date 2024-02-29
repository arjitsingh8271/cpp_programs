# include <bits/stdc++.h>
using namespace std;

int is_sorted_asc(int a[], int size);
int is_sorted_desc(int a[], int size);

int main()
{
	int arr1[5] = {1, 2, 1, 4, 1};
	int arr2[5] = {1, 2, 3, 4, 5};
	int arr3[5] = {1, 2, 4, 4, 5};
	int arr4[5] = {4, 4, 2, 2, 1};
	int arr5[5] = {1, 2, 1, 4, 1};

	cout<<is_sorted_asc(arr1, 5)<<endl;		// -> 0
	cout<<is_sorted_asc(arr2, 5)<<endl;		// -> 1
	cout<<is_sorted_asc(arr3, 5)<<endl;		// -> 1

	cout<<is_sorted_desc(arr4, 5)<<endl;	// -> 1
	cout<<is_sorted_desc(arr5, 5)<<endl;	// -> 0

	return 0;
}

int is_sorted_asc(int a[], int size)
{
	for(int i=1; i<size; i++)
	{
		if(a[i] >= a[i-1]){}
		
		else
			return 0;
	}

	return 1;
}

int is_sorted_desc(int a[], int size)
{
	for(int i=1; i<size; i++)
	{
		if(a[i] <= a[i-1]){}
		
		else
			return 0;
	}

	return 1;
}