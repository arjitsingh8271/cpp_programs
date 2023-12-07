# include<iostream>
# include<math.h>
using namespace std;

void reverse_arr( int i, int ar[], int size)
{
	if(i>=size/2)
		return;
	else
	{
		swap(ar[i], ar[size-i-1]);
		reverse_arr(i+1, ar, size);
	}
}


int main()
{
	int size;
	cin>>size;
	int arr[size];
	
	for(int i=0 ; i<size ;i++)
		cin>>arr[i];

	reverse_arr(0, arr, size);
	
	for(int i=0 ; i<size ; i++)
		cout<<arr[i]<<" ";

	cout<<endl;

	return 0;
}



/*
OUTPUT: 4
		1 2 3 4
		4 3 2 1 
*/