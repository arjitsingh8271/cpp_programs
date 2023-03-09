#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int arr[5] = {3, 5, 1, 4, 2};
	int size = sizeof(arr) / sizeof(arr[0]);

	for(int i=0; i<size; i++)
	{
		cout<<" "<<arr[i];
	}
	cout<<endl;

	sort(arr, arr + size, greater<int>());

	for(int i=0; i<size; i++)
	{
		cout<<" "<<arr[i];
	}
	cout<<endl;

	return 0;
}




/*
OUTPUT:  3 5 1 4 2                                                                              
		 5 4 3 2 1
*/