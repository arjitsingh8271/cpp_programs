/*

Swap two number

Example 1:
Input: a = 13, b = 9
Output: 9 13
Explanation: after swapping it
becomes 9 and 13.

Example 2:
Input: a = 15, b = 8
Output: 8 15
Explanation: after swapping it
becomes 8 and 15.

Expected Time Complexity: O(1)
Expected Auxiliary Space: O(1)

Constraints:
1 ≤ a, b ≤ 10^6

*/






//{ Driver Code Starts
//Initial template for c++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    pair<int, int> get(int a, int b)
    {
        a = a+b;
        b = a-b;
        a = a-b;
        
        return {a, b};
    }
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int a, b;
        cin >> a >> b;
        
        Solution ob;
        pair<int, int>p = ob.get(a, b);
        cout << p.first << ' ' << p.second << endl;
    
    }
    return 0; 
} 

// } Driver Code Ends