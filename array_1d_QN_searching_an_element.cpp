/*
Array Size Input :	4
Array Input :	{1, 2, 3, 4}
key Input : 		3
Output : 		Fount at 2
*/

# include <iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter no. of elements in an arrays: ";
	cin>>n;
	int arr[n];

	cout<<"Enter "<<n<<" elements in arrays: ";
	for(int i=0 ; i<n ; i++)
	{
		cin>>arr[i];
	}

	int key;
	cin>>key;

	for(int i=0 ; i<n ; i++)
	{
		if(key == arr[i])
		{
			cout<<"Found at "<<i<<" "<<arr[i]<<endl;
			return 1;
		}
	}
	cout<<"Not Found"<<endl;
}