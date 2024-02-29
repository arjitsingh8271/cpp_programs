/*
T.C = O(n)
S.C = O(1)
*/

# include <bits/stdc++.h>
using namespace std;

vector<int> mv_zeros(vector<int> a, int n);

int main()
{
	vector<int> arr = {2, 0, 3, 0, 5};

	for(auto x:arr)
		cout<<x<<" ";						// -> 2 0 3 0 5
	cout<<endl;

	for(auto x:mv_zeros(arr, arr.size()))
		cout<<x<<" ";						// -> 2 3 5 0 0
	cout<<endl;

	return 0;
}

vector<int> mv_zeros(vector<int> a, int n)
{
	int j=-1;

	for(int i=0; i<n; i++)
	{
		if(a[i] == 0)
		{	
			j = i;
			break;
		}
	}

	// for non_zero elememt
	if(j==-1) 
		return a;

	for(int i=j+1; i<n; i++)
	{
		if(a[i] != 0)
		{
			swap(a[i], a[j]);
			j++;
		}
	}
	
	return a;
}