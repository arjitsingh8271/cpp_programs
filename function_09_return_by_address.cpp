#include <iostream>
#include <algorithm>

using namespace std;

int *fun(int size)
{
	int *a=new int[size];
	for (int i = 0; i < size; ++i)
	{
		a[i]=i+1;
	}
	cout<<a<<endl;		//----> 0x55aefe55deb0
	return a;
}

int main()
{
	int *ptr=fun(5);
	cout<<ptr<<endl;	//----> 0x55aefe55deb0
	return 0;
}




/*
OUTPUT: 0x55aefe55deb0
		0x55aefe55deb0
*/