/*

Print alternate elements of an array

Input:
N = 5
A[] = {1, 2, 3, 4, 5}
Output:
1 3 5

Constraints:
1 <= N <= 10^5
1 <= Ai <= 10^5

Expected Time Complexity: O(n)
Expected Auxiliary Space: O(1)
*/





# include<iostream>
using namespace std;

void print(int ar[], int n)
{
	for(int i=0 ; i<n ; i++)
		cin>>ar[i];
	for(int i=0 ; i<n ; i+=2)
		cout<<ar[i]<<" ";
	cout<<endl;
}

int main()
{
	int num;
	cout<<"Input size: ";
	cin>>num;
	int arr[num];
	print(arr, num);

	return 0;
}





/* GFG
//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

// ar[] is the array 
// n is the number of elements in array.
void print(int ar[], int n)
{
    for(int i=0 ; i<n ; i+=2)
        cout<<ar[i]<<" ";
}

//{ Driver Code Starts.
int main()
{
   int t;
   cin>>t;
  while(t--)
   {
     int ar[100001]={0};
     int n;
     cin>>n;
     for(int i=0;i<n;i++)
      cin>>ar[i];
      print(ar,n);
      cout<<endl;
     }

return 0;
}

// } Driver Code Ends
*/