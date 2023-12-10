/*
Default Argument:

when we don't pass a parameters value.
then it will set automaticly a value which we set as default.
*/

# include <iostream>
using namespace std;

int add(int a, int b, int c = 0)
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