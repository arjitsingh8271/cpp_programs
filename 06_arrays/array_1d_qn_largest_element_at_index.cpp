/*
Input : {1 6 3 8}
Output : 3
*/

# include <iostream>
# include <climits>
using namespace std;

int main()
{
	int n;
	cout<<"Enter no. of element: ";
	cin>>n;
	int arr[n], i, max=INT_MIN;
	cout<<"Enter "<<n<<" elements in array: ";
	for (int i=0; i < n; i++)
	{
		cin>>arr[i];
	}

	for(i=0 ; i<n ; i++)
	{
		if(max > arr[i])
			max = arr[i];
	}

	cout<<"largest element at "<<--i<<endl;

}