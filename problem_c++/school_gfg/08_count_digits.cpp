/*

Count Digits

Given a number N. Count the number of digits in N which evenly divides N.

Note :- Evenly divides means whether N is divisible by a digit i.e. leaves a remainder 0 when divided.

Example 1:

Input:
N = 12
Output:
2
Explanation:
1, 2 both divide 12 evenly

Example 2:

Input:
N = 23
Output
0
Explanation:
2 and 3, none of them
divide 23 evenly

Your Task:
You don't need to read input or print anything. Your task is to complete the function evenlyDivides() which takes an integer N as input parameters and returns an integer, total number factor of digits N which divides N evenly.

Expected Time Complexity: O(log N)
Expected Space Complexity: O(1)

Constraints:
1<=N<=105

*/





# include<iostream>
using namespace std;

class solution
{
	public:

	int evenlyDivides(int n)
	{
		int rem=0, temp=0, count=0;
		temp = n;

		while(n!=0)
		{
			rem = n%10;

			if (rem!=0) // if(rem!=0 && temp%rem==0)
			{
				if(temp % rem == 0)
				{
					count +=1;					
				}

			}
			n /= 10;	
		}

		return count;
	}
};

int main()
{
	int num;
	cout<<"Input: ";
	cin>>num;

	solution s1;
	cout<<s1.evenlyDivides(num)<<endl;


	return 0;
}





/*	GFG

//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int evenlyDivides(int N){
        int rem=0, temp=0, count=0;
		temp = N;

		while(N!=0)
		{
			rem = N%10;

			if (rem!=0) // if(rem!=0 && temp%rem==0)
			{
				if(temp % rem == 0)
				{
					count +=1;					
				}

			}
			N /= 10;	
		}

		return count;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends

*/