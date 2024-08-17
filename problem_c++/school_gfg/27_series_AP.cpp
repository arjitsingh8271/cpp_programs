/*
Series AP

Example 1:
Input:
A1=2
A2=3
N=4
Output:
5
Explanation:
The series is 2,3,4,5,6....
Thus,4th term is 5.

Example 2:
Input:
A1=1
A2=2
N=10
Output:
10
Explanation:
The series is1,2,3,4,5,6,7,8,9,10,11..
Thus,10th term is 10.

Expected Time Complexity:O(1)
Expected Auxillary Space:O(1)

Constraints:
-10^4<=A1,A2<=10^4
1<=N<=10^3
*/


//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int nthTermOfAP(int A1, int A2, int N) 
    {
        // nth = a + (n − 1) × d
        // Where 
        // a = First term
        // d = Common difference
        // n = number of terms
        
        return A1 + (N-1) * (A2-A1);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int A1, A2, N;
        cin >> A1 >> A2 >> N;
        Solution ob;
        cout << ob.nthTermOfAP(A1, A2, N) << "\n";
    }
}

// } Driver Code Ends