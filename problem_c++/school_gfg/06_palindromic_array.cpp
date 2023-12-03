/*

Palindromic Array

Given a Integer array A[] of n elements. Your task is to complete the function PalinArray. 
Which will return 1 if all the elements of the Array are palindrome otherwise it will return 0.

Example 1:

Input:
5
111 222 333 444 555
Output:
1
Explanation:
A[0] = 111 //which is a palindrome number.
A[1] = 222 //which is a palindrome number.
A[2] = 333 //which is a palindrome number.
A[3] = 444 //which is a palindrome number.
A[4] = 555 //which is a palindrome number.
As all numbers are palindrome so This will return 1.


Example 2:

Input:
3
121 131 20 
Output:
0
Explanation:
20 is not a palindrome hence the output is 0.

Constraints:
1 <=T<= 50
1 <=n<= 20
1 <=A[]<= 10000
*/





# include<iostream>
using namespace std;

class solution
{
public:

	int palindromicArray(int arr[], int n)
	{
		int arr2[n], arr3[n];
		for(int i=0 ; i<n ; i++)
		{
			cin>>arr[i];
			arr2[i] = arr[i];
		}

		for(int i=0 ; i<n ; i++)
		{
			int rem=0, rev=0;
			while(arr2[i]!=0)
			{
				rem = arr2[i] % 10;
				rev = (rev*10) + rem;
				arr2[i] /=10; 
			}
			arr3[i]=rev;
		}

		for(int i=0 ; i<n ; i++)
		{
			//cout<<arr[i]<<" "<<arr3[i]<<endl;
			if(arr[i]!=arr3[i])
				return 0;
		}
		return 1;	
	}
};

int main()
{
	solution s1;
	cout<<"Input size: ";
	
	int a,arr[a];
	cin>>a;
	cout<<s1.palindromicArray(arr, a)<<" ";

	return 0;
}





/*	GFG
//{ Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


// } Driver Code Ends
//Complete the function below

class Solution {
public:
    int PalinArray(int a[], int n)
    {
        int arr2[n], arr3[n];
        
        for(int i=0 ; i<n ; i++)
            arr2[i] = a[i];
    	
    	for(int i=0 ; i<n ; i++)
    	{
    	    int rem=0, rev=0;
    	    
    	    while(arr2[i]!=0)
    	    {
    	        rem = arr2[i]%10;
    	        rev = (rev*10) + rem;
    	        arr2[i] /=10;
    	    }
    	    arr3[i]=rev;
    	}
    	
    	for(int i=0 ; i<n ; i++)
    	{
    	    if(a[i] != arr3[i])
    	        return 0;
    	}
    	
    	return 1;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}
// } Driver Code Ends
*/