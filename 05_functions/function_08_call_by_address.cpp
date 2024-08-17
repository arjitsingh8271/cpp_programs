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
	int x = 5;
	cout<<increment(&x)<<endl;		// here a = 6
	cout<<x<<endl;					// here a = 6

	return 0;
}


/*
OUTPUT: 6
		6

In this example, we are going to demonstrate the call by address mechanism. 
From the “main()” function, we are calling the “increment()” function and 
passing the address of “x”. In the function definition, we are receiving 
the address of “x” in a pointer variable, i.e., “a”. Inside the function increment, 
the value of “x” is being changed to (*a++) i.e, '6' with the help of the pointer. 
Therefore, the value of “x” is getting changed to 6 inside the “main()” 
function after the “increment()” function call.

*/