# include <iostream>
using namespace std;


void bubbleSort(int a[], int size)
{
	for(int i=0 ; i<5 ; i++)
	{
		for(int j=0 ; j<5-1 ; j++)
		{
			if(a[j] > a[j+1])
			{
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
}

void printArray(int a[], int size)
{
	for(int i=0 ; i < size ; i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

// int main()
// {
// 	int a[5] = {123, 55, 86, 23, -3};
// 	int size = sizeof(a) / sizeof(a[0]);
// 	printArray(a, size);
// 	bubbleSort(a, size);
// 	printArray(a, size);
// }

int main()
{
	int s;
	cout<<"Enter Size: ";
	cin>>s;

	int a[s];
	for(int i=0 ; i<s ; i++)
		cin>>a[i];

	printArray(a, s);
	bubbleSort(a, s);
	printArray(a, s);

	return 0;
}