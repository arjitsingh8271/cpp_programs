/* WAP to read two arrays of size 5 & store sum of these arrays into third array */ 

#include <iostream>
using namespace std;

int main()
{
	int arr1[5],arr2[5],sumarr[5],i;

	cout<<"1st Array :"<<endl;

	for (int i = 0; i < 5; i++)
	{
		cin>>arr1[i];
	}

	cout<<"2st Array :"<<endl;

	for (int i = 0; i < 5; i++)
	{
		cin>>arr2[i];
	}

	for (int i = 0; i < 5; i++)
	{
		sumarr[i] = arr1[i] + arr2[i];
		cout<<"Index "<<i<<" sum of 1st and 2nd Arrays is "<<sumarr[i]<<endl;
	}

	return 0;
}