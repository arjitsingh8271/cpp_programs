/*
Check for Binary

Example 1:

Input:
str = 101
Output:
1
Explanation:
Since string contains only 0 and 1, output is 1.
Example 2:

Input:
str = 75
Output:
0
Explanation:
Since string contains digits other than 0 and 1, output is 0.
 

Expected Time Complexity: O(|s|)
Expected Auxiliary Space: O(1)


Constraints:
1 <=T<= 50
1 <=Length of str<= 10000

*/



//{ Driver Code Starts
// C++ program to Print root to leaf path WITHOUT
// using recursion
#include <bits/stdc++.h>
using namespace std;

bool isBinary(string str);

// Driver program to test above functions
int main()
{
    string str;
    int t;
    scanf("%d\n", &t);
    while (t--)
    {
       cin >> str;
       cout << isBinary(str) << endl;
    }
    return 0;
}

// } Driver Code Ends


// Return true if str is binary, else false
bool isBinary(string str)
{
   for(int i=0 ; i<str.size() ; i++)
    {    
        if(str[i] !='0' && str[i] !='1')
            return 0;
    }
    
    return 1;
}