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
	int a = 5;
	cout<<increment(a)<<endl;		// here a = 6
	cout<<a<<endl;					// here a = 6

	return 0;
}



/*
OUTPUT: 6
		6
*/