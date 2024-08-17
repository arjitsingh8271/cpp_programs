/*
Attributes and methods are basically variables 
and functions that belongs to the class. 
These are often referred to as "class members".
*/

/*
Class:
Class is a User-Define Data type.
That can store multiple data type as well as multiple function

*/

#include<iostream>
using namespace std;

class output
{
	public:				// Access Specifier or Access Modifier
		int a = 5;		// Data Member or attributes
};

int main()
{
	output xyz;			// xyz is an object of hello class
	cout<<xyz.a<<endl;

	return 0;
}



// OUTPUT: 5