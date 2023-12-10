/*
Remove Space

Example 1:
Input:
S = "geeks  for geeks"
Output: geeksforgeeks
Explanation: All the spaces have been 
removed.

Example 2:
Input: 
S = "    g f g"
Output: gfg
Explanation: All the spaces including
the leading ones have been removed.

Expected Time Complexity: O(|S|).
Expected Auxiliary Space: O(1).

Constraints:
1<=|S|<=105
*/



//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string modify (string s)
    {
        string s1;
       for(int i=0 ; i<s.size() ; i++)
       {
            if(s[i]==' ')
                continue;
            else
                s1+=s[i];
       }
       return s1;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    cin.ignore ();
    while (t--)
    {
        string s;
        getline (cin, s);
        Solution ob;
        cout <<ob.modify (s) << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends
