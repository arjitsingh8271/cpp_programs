#include<iostream>
using namespace std;

int main()
{
	int a[] = {1,2,3,4};
	int *p = &a[0];
	cout<<p<<endl;				// its print address of an array

	char c[] = "a,b,c";
	char *q = &c[0];
	cout<<q<<endl;				// by default it print all values

	return 0;
}



/*
OUTPUT: 0x7fffddb4f120                                                                     
		a,b,c
*/