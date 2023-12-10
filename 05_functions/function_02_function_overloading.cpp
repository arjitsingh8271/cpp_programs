/*
Function Overloading:
 
Function having same return type but different parameters.
*/

# include <iostream>
using namespace std;

int add(int a, int b)
{
	return a+b;
}

int add(int a, int b, int c)
{
	return a+b+c; 
}

int main()
{
	int x=1, y=2, z=3;

	cout<<add(x, y)<<endl;
	cout<<add(x, y, z)<<endl;

	return 0;
}




/*
OUTPUT: 3
		6
*/