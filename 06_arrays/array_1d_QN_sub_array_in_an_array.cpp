#include <iostream>
using namespace std;

void sub_array(int a[], int size)
{
	for(int i=0; i<size; i++)
	{
		for(int j=i; j<size; j++)
		{
			for(int k=i; k<=j; k++)
				cout<<a[k]<<" ";
			cout<<" ";
		}
		cout<<endl;
	}
}

int main()
{
	int arr[] = {1, 2, 3, 4, 5};
	int size = sizeof(arr) / sizeof(arr[0]);

	sub_array(arr, size);
}




/*
OUTPUT: 1  1 2  1 2 3  1 2 3 4  1 2 3 4 5  
		2  2 3  2 3 4  2 3 4 5  
		3  3 4  3 4 5  
		4  4 5  
		5 
*/