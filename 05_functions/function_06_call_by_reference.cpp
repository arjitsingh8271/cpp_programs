/*
Call by reference:  (Reference is a alias(nickname) for a variable)

In the call by reference, both actual & formal parameters show the same value.
Both the actual & formal parameters point to the same address in the memory.
So the change done by formal parameter is also reflected in actual parameter.
*/

# include <iostream>
using namespace std;

int increment(int &a)
{
	a++;
	return a;
}

int main()
{
	int x = 5;
	cout<<increment(x)<<endl;		// here x = 6
	cout<<x<<endl;					// here x = 6

	return 0;
}


/*
OUTPUT: 6
		6


In this example, we are going to demonstrate how call by reference works in C++. 
In the “increment()” function definition, the value is being received as a reference 
variable (&a). With the help of the reference variable (i.e., a), we are able to 
change the value of the actual parameter (x) inside the “main()” function.

*/

