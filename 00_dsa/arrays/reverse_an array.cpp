# include <iostream>
using namespace std;

int main()
{
	int arr[6] = {1,2,3,4,5,6};

	for (int x : arr)
		cout<<x<<" ";
	cout<<endl;

	for(int i=0 ; i<6/2 ; i++)
	{
		int temp = arr[i];
		arr[i] = arr[6-i-1];
		arr[6-i-1] = temp;
	}

	for(int i=0;i<6;i++)
		cout<<arr[i]<<" ";
	cout<<endl;

	return 0;
}


/*
OUTPUT: 1 2 3 4 5 6                                                                         
		6 5 4 3 2 1
*/ 