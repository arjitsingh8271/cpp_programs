/*
Inline Function:
If a functiin is inline, the compiler place a copy of 
the code of that function at each point when the function 
is called at compile time.
						or
When the function is called in the 'main' function, the compiler replace the function call with the actual code of the function, which can lead to more efficient code in some cases.
*/


# include <iostream>
using namespace std;

inline int cube(int a)
{
	return a*a*a;
}

int main()
{
	cout<<"Cube of 3 is: "<<cube(3)<<endl;

	return 0;
}



// OUTPUT: Cube of 3 is: 27