/*
You are given a sorted integer array 'arr' of size 'n'.
You need to remove the duplicates from the array such 
that each element appears only once. Return the length 
of this new array.

T.C = O(n)
S.C = O(1)
*/


# include <bits/stdc++.h>
using namespace std;

int rm_duplicate(vector<int> &arr, int n);

int main()
{
	vector<int> arr = {1, 2, 2, 3, 3, 3};

	cout<<"Old length: "<<arr.size()<<endl;					// -> 6
	cout<<"New length: "<<rm_duplicate(arr, 6)<<endl;		// -> 3

	return 0;
}

int rm_duplicate(vector<int> &arr, int n)
{
	int j=0;
	for(int i=1; i<n; i++)
	{
		if(arr[j] != arr[i])
		{
			arr[j+1] = arr[i];
			j++;
		}
	}

	return j+1;
}
