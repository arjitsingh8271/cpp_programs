/*
Call by value  OR  Pass by value :

When a function called in the call by value, the value of actual parameter 
is copied into formal parameter.
Both the actual & formal parameter have their own copies of value, 
therefor any change in one of the type of parameter will not be reflected by the other.
*/

# include <iostream>
using namespace std;

int increment(int a)
{
	a++;							// Formal parameter
	return a;
}

int main()
{
	int a = 5;						// Actual parameter
	cout<<increment(a)<<endl;		// here a = 6
	cout<<a<<endl;					// here a = 5

	return 0;
}




/*
OUTPUT: 6
		5
*/