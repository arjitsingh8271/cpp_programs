/*

GCD of two numbers.

Example 1:
Input: A = 3, B = 6
Output: 3
Explanation: GCD of 3 and 6 is 3

Example 2:
Input: A = 1, B = 1
Output: 1
Explanation: GCD of 1 and 1 is 1

Expected Time Complexity: O(log(min(A, B)))
Expected Auxiliary Space: O(1)

Constraints:
1 ≤ A, B ≤ 109
*/


//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
	public:
    int gcd(int A, int B) 
	{ 
	    int rem=0;
	    while(A!=0 && B!=0)
	    {
	        rem = A % B;
	        A = B;
	        B = rem;
	    }
	    return A;
	} 
};

//{ Driver Code Starts.

int main() 
{
   	int t;
    cin >> t;
    while (t--)
    {
        int A, B;
        cin >> A >> B;
        Solution ob;
       	cout <<  ob.gcd(A, B) << "\n";
    }
    return 0;
}
// } Driver Code Ends



/*	Examine

Let A=15, B=25

15 % 25 = 15
25 % 15 = 10
15 % 10 = 5
10 % 5 = 0

so 5 is GCD of 15, 25. 


rem = A % B;
A = B;
B = rem;

return A;

*/