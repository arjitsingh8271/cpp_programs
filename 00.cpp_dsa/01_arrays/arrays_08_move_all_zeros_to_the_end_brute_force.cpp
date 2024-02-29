/*
T.C = O(N) + O(X) + O(N-X) ~ O(2*N)
S.C = O(n) we use temp array
*/

# include <bits/stdc++.h>
using namespace std;

vector<int> mv_zeros(vector<int> arr, int n);

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
	vector<int> temp;

	for(int i=0; i<n; i++)
	{
		if(a[i] != 0)
			temp.emplace_back(a[i]);
	}

	for(int i=0; i<temp.size(); i++)
		a[i] = temp[i];

	for(int i=temp.size(); i<n; i++)
		a[i] = 0;

	return a;
}