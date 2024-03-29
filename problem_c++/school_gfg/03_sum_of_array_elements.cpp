/*

Sum of Array Elements

Input:
n = 4
arr[] = {1 2 3 4}
Output: 10

Expected Time Complexity: O(n).
Expected Auxiliary Space: O(1).

Constraints:
1 <= n <= 10^3
1 <= arri <= 10^4

*/





# include <iostream>
using namespace std;

int sumElement(int arr[], int n)
{
	for(int i=0 ; i<n ; i++)
		cin>>arr[i];
	int sum=0;
	for(int j=0 ; j<n ; j++)
		sum +=arr[j];

	return sum;
}

int main()
{
	int num, arr[num];
	cout<<"Input: Size: ";
	cin>>num;
	cout<<sumElement(arr, num)<<endl;

	
	return 0;
}






/* GFG
//{ Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

//Complete this function

int sumElement(int arr[],int n)
{
    int sum=0;
    // for(int i=0 ; i<n ; i++)
    // {
    //     cin>>arr[i];
    // }
    
    for(int j=0 ; j<n ; j++)
    {
        sum += arr[j];
    }
    return sum;
}


//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    
	    cout<<sumElement(arr,n)<<endl;
	    
	}
	return 0;
}
// } Driver Code Ends
*/
