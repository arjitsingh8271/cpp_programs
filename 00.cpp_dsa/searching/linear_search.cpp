# include <iostream>
using namespace std;

int binary_srch(int a[], int to_search, int size)
{
	int i=0;
	while (i <= size)
	{
		if(a[i] == to_search)
			return i;
		i++; 
	}

	return -1;
	
}

int main()
{
	int size;
	cin>>size;

	int arr[size];

	for(int i=0 ; i<size ; i++)
	{
		cin>>arr[i];
	}

	int key; 
	cin>>key;

	cout<<binary_srch(arr, key, size);

}