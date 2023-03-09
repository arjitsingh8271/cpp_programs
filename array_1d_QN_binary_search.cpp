#include <iostream>
using namespace std;

int binary_search(int a[], int k, int size)
{
	int l=0, r=(size-1);

	while(l <= r)
	{
		int mid = (l+r)/2;

		if(k == a[mid])		// found
			return mid;
		if(k < mid)			// shift left
			r=mid-1;
		else				// shift right
			l=mid+1;
	}

	return -1;
}

int main()
{
	int arr[] = {1, 2, 3, 4, 5};
	int key = 14;
	int size = (sizeof(arr)/sizeof(arr[0]));

	cout<<binary_search(arr, key, size)<<endl;
}




/*
		key=4;
OUTPUT:	3

		key=14;
OUTPUT:	-1
*/