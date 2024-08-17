# include <iostream>
using namespace std;

void insertion_sort(int ar[])
{
	int n = 5;

	for(int i=0 ; i<n ; i++)
	{
		int key = ar[i];
		int j = i-1;

		while( j>= 0 && key < ar[j])
		{
			ar[j+1] = ar[j];
			j -= 1; 
		} 

		ar[j+1] = key;
	}
	
}


int main()
{
	int arr[] = {4,2,1,3,5};

	for(int x:arr){
		cout<<x<<" ";
	}
	cout<<endl;

	insertion_sort(arr);

	for(int x:arr){
		cout<<x<<" ";
	}
	cout<<endl;

	return 0;
}