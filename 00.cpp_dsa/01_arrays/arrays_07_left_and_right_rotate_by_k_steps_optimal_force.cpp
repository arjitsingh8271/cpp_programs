/*
Given an array with elements, the task is to rotate the 
array to the left by k steps, where k is non-negative

T.C = O(2n)
S.C = O(1)
*/

# include <bits/stdc++.h>
using namespace std;

void l_rotate(int arr[], int n, int k);
void r_rotate(int arr[], int n, int k);
void reverseA(int arr[], int start, int end);

int main()
{
	int arr[5] = {1, 2, 3, 4, 5};

	for(auto x: arr)
		cout<<x<<" ";
	cout<<endl;

	int k;
	cout<<"Enter k value: ";
	cin>>k;

	l_rotate(arr, 5, k);
	for(auto x:arr)
		cout<<x<<" ";
	cout<<endl;

	r_rotate(arr, 5, k);
	for(auto x:arr)
		cout<<x<<" ";
	cout<<endl;

	return 0;
}

void l_rotate(int arr[], int n, int k)
{
	k = k%n;

	// // Using STL
	// // Reverse first n-k elements
	// reverse(arr, arr+k);		// T.C = O(k)
	// // Reverse last k elements
	// reverse(arr+k, arr+n);		// T.C = O(n-k)
	// // Reverse whole array
	// reverse(arr, arr+n);		// T.C = O(n)

	reverseA(arr, 0, k-1);
	reverseA(arr, k, n-1);
	reverseA(arr, 0, n-1);
}

void r_rotate(int arr[], int n, int k)
{
	k = k%n;

	// //Using STL
	// // Reverse the entire array
	// reverse(arr, arr+n);		// T.C = O(k)
	// // Reverse last k elements
	// reverse(arr, arr+k);		// T.C = O(n-k)
	// // Reverse the rest of the array
	// reverse(arr+k, arr+n);		// T.C = O(n)

	reverseA(arr, 0, n-k-1);
	reverseA(arr, n-k, n-1);
	reverseA(arr, 0, n-1);
}


void reverseA(int arr[], int start, int end)
{
	while(start <= end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}




/*
OUTPUT: 1 2 3 4 5 
		Enter k value: 1
		2 3 4 5 1
		1 2 3 4 5 

		1 2 3 4 5 
		Enter k value: 5
		1 2 3 4 5 
		1 2 3 4 5

		1 2 3 4 5 
		Enter k value: 6
		2 3 4 5 1 
		1 2 3 4 5
*/