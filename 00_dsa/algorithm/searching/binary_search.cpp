# include <iostream>
using namespace std;

int binary_srch(int a[], int to_search, int size)
{
	int l = 0;
	int h = size - 1;

	while (l<=h)
	{
		int mid = (l+h)/2;
		
		if(a[mid] == to_search)
			return mid;

		else if (a[mid] < to_search)
			l = mid + 1;
		
		else
			h = mid - 1;
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