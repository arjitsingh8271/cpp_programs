/*
Template:

We can write multiple function together as a single function 
were if the difference in there in their datatype / returnType.
*/

# include <iostream>
using namespace std;

template <class T>
T add(T x, T y)
{
	cout<<x+y<<endl;

	return 0;
}

int main()
{
	int a = add(2, 5);
	float b = add(2.4,  5.8);
	char c = add('a', 'b');			// ASCII value of a=97, b=98

	return 0;
}




/*
OUTPUT: 7
		8.2
		195
*/