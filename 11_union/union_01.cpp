/*
*Union is a user-defined data type but unlike 
structure, union members share same memory location.
*This means that only one of the data members in a 
union can be active at a time.
*If we make changes in one member then it will be
reflected to other member as well.
*Size of the union is taken according to the size
of the largest member of the union.
*If our requirment to access one member at a time 
for a particular element then Union is best.
*/

#include <iostream>
using namespace std;

union abc
{
	int a;
	int b;
	char c;
};

int main()
{
	abc x; 
	x.a=65;

	cout<<x.a<<" "<<(&x.a)<<endl;
	cout<<x.b<<" "<<(&x.b)<<endl;
	cout<<x.c<<" "<<(&x.c)<<endl;
	return 0;
}


/*
OUTPUT: 65 0x7ffde993ae44
		65 0x7ffde993ae44
		A A
*/