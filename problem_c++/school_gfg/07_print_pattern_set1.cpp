/*

Print the pattern | set-1

You are given a number N. You need to print the pattern for the given value of N.

For N = 2 the pattern will be 
2 2 1 1
2 1

For N = 3 the pattern will be 
3 3 3 2 2 2 1 1 1
3 3 2 2 1 1
3 2 1

Note: Instead of printing a new line print a "$" without quotes. After printing the total output, end of the line is expected.

Example 1:

Input: 2
Output:
2 2 1 1 $2 1 $

Example 2:

Input: 3
Output:
3 3 3 2 2 2 1 1 1 $3 3 2 2 1 1 $3 2 1 $

Your Task:
Since this is a function problem, you don't need to worry about the test cases. Your task is to complete the function printPat() which takes one argument 'N' denoting the length of the pattern.

Constraints:
1 <= N <= 40


*/





# include<iostream>
using namespace std;

void printPattern(int n)
{
	for(int i=n ; i>=1 ; i--)
	{
		for(int j=n ; j>=1 ; j--)
		{
			for (int k=i; k>=1 ; k--)
			{
				cout<<j<<" ";
			}
		}
		cout<<"$";
	}
	
}

int main()
{
	int num;
	cout<<"Input: ";
	cin>>num;
	printPattern(num);

	return 0;
}





/*	GFG
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
void printPat(int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n;
	cin>>n;
    printPat(n);
    cout<<endl;
	}
}
// } Driver Code Ends


//You are required to complete this method
void printPat(int n)
{
    for(int i=n ; i>=1 ; i--)
    {
        for(int j=n ; j>=1 ; j--)
        {
            for(int k=i ; k>=1 ; k--)
                cout<<j<<" ";
        }
        cout<<"$";
    }
}
*/