/*
Convert String to LowerCase

Example 1:
Input: S = "ABCddE"
Output: "abcdde"
Explanation: A, B, C and E are converted to
a, b, c and E thus all uppercase characters 
of the string converted to lowercase letter.

Example 2:
Input: S = "LMNOppQQ"
Output: "lmnoppqq"
Explanation: L, M, N, O, and Q are 
converted to l, m, n, o and q thus 
all uppercase characters of the 
string converted to lowercase letter.

Expected Time Complexity:O(n)
Expected Auxiliary Space: O(1) 

Constraints:
1 <= |S| <= 1000
*/


//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string toLower(string S) 
    {
        for(int i=0 ; i<S.size() ; i++)
        {
            // Using in-build function
            //S[i] = tolower(S[i]);    
            
            // Without in-build function
            if(S[i] >= 97 && S[i] <= 122)   
                continue;
            S[i] = S[i]+32;
        }
        return S;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) 
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.toLower(S) << endl;
    }
    return 0;
}

// } Driver Code Ends


/*	Examine

97 - 122 (a - z)
65 - 90  (A - Z)

S[i]= 'A' i.e 65
S[i] + 32 i.e 65+32 = 97 i.e 'a'

S[i]= 'V' i.e 86
S[i] + 32 i.e 86+32 = 118 i.e 'v'

...
*/