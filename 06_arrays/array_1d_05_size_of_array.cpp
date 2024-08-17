#include <iostream>
using namespace std;

int main()
{
	int arr[] = {1,2,3,4,5};
	int size;
	
	size = sizeof(arr) / sizeof (arr[0]);
	
	cout<<size<<endl;

	return 0;
}



// OUTPUT: 5