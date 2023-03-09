/*
Call by address:

In this mechanism, we passing the address of actual parameter 
pointer variable are used as formal parameter.
The formal variable hold the address of actual variable.
So the change done by formal parameter is also reflected in actual parameter.
*/

# include <iostream>
using namespace std;

int increment(int *a)
{
	(*a)++;
	return *a;
}

int main()
{
	int a = 5;
	cout<<increment(&a)<<endl;		// here a = 6
	cout<<a<<endl;					// here a = 6

	return 0;
}




/*
OUTPUT: 6
		6
*/