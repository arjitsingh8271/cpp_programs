/*
Logic for reverse of an array

l=0 , h=(size-1)
condition (l<h)
swap: temp = l; l = h; h = temp;
Input:	{1, 2, 3, 4}
 		 l        h 	l++, h--
		{4, 2, 3, 1}
    		l  h
Output:	{4, 3, 2, 1}

*/


# include <iostream>
using namespace std;

	// 1st logic
void reverse_array_1(int a[], int n)
{
	int low=0, high=(n-1), temp=0;

	while(low<=high)
	{
		temp = a[low];
		a[low] = a[high];
		a[high] = temp;
		low++;
		high--;
	}

	// for(int x : a)
	// 	cout<<x<<" ";

	for(int i=0; i<n; i++)
		cout<<a[i]<<" ";

	cout<<endl;
}

	// 2nd logic
int reverse_array_2(int a[], int n)
{
	for(int i=0,j=n-1 ; i<(n/2) ; i++,j--)
	{
		int temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}

	// for(int x : a)
	// 	cout<<x<<" ";

	for(int i=0; i<n; i++)
		cout<<a[i]<<" ";

	cout<<endl;

	return 0;
}

	// 3rd logic
void reverse_array_3(int a[], int n)
{
	for(int i=0; i<(n/2); i++)
	{
		int temp = a[i];
		a[i] = a[n-i-1];
		a[n-i-1] = temp;
	}

	// for(int x : a)
	// 	cout<<x<<" ";

	for(int i=0; i<n; i++)
		cout<<a[i]<<" ";

	cout<<endl;
}

int main()
{
	int n;
	cin>>n;
	int arr[n];

	for(int i=0 ; i<n ; i++)
	{
		cin>>arr[i];
	}

	reverse_array_1(arr, n);
	reverse_array_2(arr, n);
	reverse_array_3(arr, n);
	return 0;
}




/*
INPUT:	4
		1 2 3 4
OUTPUT:	4 3 2 1 
		1 2 3 4 
		4 3 2 1
*/