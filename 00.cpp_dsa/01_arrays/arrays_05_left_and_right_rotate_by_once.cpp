/*
Given an array 'arr' containing 'n' elements, rotate this
array left by once means to shift all elements by one
place to left and move the first element to the last
position in the array.

if 		arr = {1, 2, 3, 4, 5}
then 	arr = {2, 3, 4, 5, 1}

T.C = O(n)
S.C = O(n)
S.C extra space = O(1)
*/

# include <bits/stdc++.h>
using namespace std;

void l_rotate(int arr[], int n);
void r_rotate(int arr[], int n);

int main()
{
	int arr[5] = {1, 2, 3, 4, 5};

	for(auto x : arr)
		cout<<x<<" ";		// -> 1 2 3 4 5
	cout<<endl;

	l_rotate(arr, 5);

	for(auto x : arr)
		cout<<x<<" ";		// -> 2 3 4 5 1
	cout<<endl;

	r_rotate(arr, 5);

	for(auto x : arr)
		cout<<x<<" ";		// -> 1 2 3 4 5
	cout<<endl;


	return 0;
}

void l_rotate(int arr[], int n)
{
	int j=arr[0];
	
	for(int i=1; i<n; i++)
		arr[i-1] = arr[i];

	arr[n-1] = j;
}

void r_rotate(int arr[], int n)
{
	int temp = arr[n-1];

	for (int i =n-1; i>0; i--) 
        arr[i] = arr[i - 1];
 
	arr[0] = temp;
}