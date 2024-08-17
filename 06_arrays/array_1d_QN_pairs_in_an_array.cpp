/*
Pairs
ARRAY:	{1, 2, 3, 4 ,5}
OUTPUT:	(1,2) (1,3) (1,4) (1,5)
		(2,3) (2,4) (2,5)
		(3,4) (3,5)
		(4,5)
*/

#include <iostream>
using namespace std;

void print_pairs(int a[], int size)
{
	for(int i=0; i<size; i++)
	{
		for(int j=i+1; j<size; j++)
			cout<<"("<<a[i]<<","<<a[j]<<")";
		cout<<endl;
	}
}

int main()
{
	int arr[] = {2, 4, 6, 8, 10};
	int size = sizeof(arr) / sizeof(arr[0]);

	print_pairs(arr, size);
}


/*
OUTPUT: (2,4)(2,6)(2,8)(2,10)
		(4,6)(4,8)(4,10)
		(6,8)(6,10)
		(8,10)
*/