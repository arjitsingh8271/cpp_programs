/*
Template:

We can write multiple function together as a single function 
were if the difference in there in their datatype / returnType.
*/


#include <iostream>
using namespace std;

/*
int maximum(int x, int y)
{
	if(x>y)
		return x;
	else
		return y;
}

float maximum(float x, float y)
{
	if(x>y)
		return x;
	else
		return y;
}
*/

template <class T>
T maximum(T x, T y)
{
	if(x>y)
		return x;
	else
		return y;
}

int main()
{
	int a = maximum(10, 5);
	cout<<a<<endl;

	float b = maximum(5.5f, 6.5f);
	cout<<b<<endl;

	return 0;
}



/*
OUTPUT: 10
		6.5
*/