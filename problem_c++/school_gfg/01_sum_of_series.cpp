/*

Series of sum

Input:
N = 5
Output: 15
Explanation: For n = 5, sum will be 15.
1 + 2 + 3 + 4 + 5 = 15.

Expected Time Complexity: O(1)
Expected Auxiliary Space: O(1)

Constraints:
1 <= N <= 10^5

*/





# include<iostream>
using namespace std;
/*
int seriesSum(int n)
{
	int sum=0;
	for(int i=1 ; i<=n ; i++)
	{
		sum += i;
	}

	return sum;
}

int main()
{
	int num;
	cin>>num;
	cout<<seriesSum(num)<<endl;
	return 0;
}
*/





class solution
{
public:
	//int n, sum;

	int seriesSum(int n)
	{
		//this-> n = n;
		int sum = 0;
		for (int i = 1; i <= n; i++)
		{
			sum += i;
		}
		return sum;
	}
};

int main()
{
	solution s;
	int n; 
	cin>>n;
	cout<<s.seriesSum(n)<<endl;
	return 0;
}





/* GFG 
//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	// function to return sum of  1, 2, ... n
	long long seriesSum(int n) {
        if(n%2==0)
            return (n/2) * 1LL * (n+1);
        else
            return ((n+1)/2) * 1LL * n;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.seriesSum(n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends
*/