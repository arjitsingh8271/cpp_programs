/*
Given an array with elements, the task is to rotate the 
array to the left by k steps, where k is non-negative

T.C = O(n+k)
S.C = O(n)
S.C extra space = O(k)
*/

# include <bits/stdc++.h>
using namespace std;

void l_rotate(int arr[], int n, int k);
void r_rotate(int arr[], int n, int k);


int main()
{
	int arr[] = {1, 2, 3, 4, 5};
	int k;

	for(auto x:arr)
		cout<<x<<" ";

	cout<<"\nEnter k value: ";
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
	if(k==0)
		return;

	k = k%n;		// 5%5= 0, 6%5= 1
	int temp[k];
	
	for(int i=0; i<k; i++)		// T.C = O(k)
		temp[i] = arr[i];

	for(int i=k; i<n; i++)		// T.C = O(n-k)
		arr[i-k] = arr[i];

	for(int i=n-k; i<n; i++)	// T.C = O(k)
		arr[i] = temp[i-(n-k)];
}

void r_rotate(int arr[], int n, int k)
{
	if(k==0)
		return;

	k = k%n;
	int temp[k];

	for (int i=n-k; i<n; i++)
  		temp[i-n+k] = arr[i];
 
  	for (int i=n-k-1; i>=0; i--)
 		arr[i+k] = arr[i];
  
  	for (int i=0; i<k; i++)
  		arr[i] = temp[i];
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