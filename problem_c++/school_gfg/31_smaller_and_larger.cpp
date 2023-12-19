/*

Smaller and Larger

Example 1:
Input:
N = 7, X = 0
Arr[] = {1, 2, 8, 10, 11, 12, 19}
Output: 0 7
Explanation: There are no elements less or
equal to 0 and 7 elements greater or equal
to 0.

Example 2:
Input:
N = 7, X = 5
Arr[] = {1, 2, 8, 10, 11, 12, 19}
Output: 2 5
Explanation: There are 2 elements less or
equal to 5 and 5 elements greater or equal
to 5.

Your Task:
You don't need to read input or print anything. Your task is to complete the function getMoreAndLess() which takes the array of integers arr, n and x as parameters and returns an array of size 2. pair denoting the answer. The first value is number of elements less than or equal to x and the second value is number of elements more than or equal to x.

Expected Time Complexity: O(logN)
Expected Auxiliary Space: O(1)

Constraints:
1 ≤ N ≤ 10^5
0 ≤ X ≤ 10^6
1 ≤ Arr[i] ≤ 10^6

*/

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	vector<int> getMoreAndLess(int arr[], int n, int x) {
	    int c=0, c1=0;
	    vector<int> v;
	    for(int i=0; i<n; i++)
	    {
	        if(arr[i]<x)
	            c+=1;
	        
	        else if(arr[i]==x){
	            c+=1;
	            c1+=1;
	        }
	        
	        else
	            c1+=1;
	    }
	    v.push_back(c);
	    v.push_back(c1);
	    return v;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMoreAndLess(arr, n, x);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}

// } Driver Code Ends


/*
OUTPUT: 1
		5
		3
		1 2 3 4 5
		3 3
*/