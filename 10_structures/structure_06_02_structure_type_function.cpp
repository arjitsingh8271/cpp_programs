// Returning a structure variable from the function

#include <iostream>
using namespace std;

struct abc
{
	int x;
	int y;
};

//struct abc fun(struct abc p)		// for C language
abc fun( abc p)
{
	(p.x)++;
	p.y += 5;

	return p;
}

int main()
{
	abc a = {10, 20};
	abc b = {30, 40};

	cout<<a.x<<" "<<a.y<<endl;
	cout<<b.x<<" "<<b.y<<endl;

	a = fun(a);
	b = fun(b);

	cout<<a.x<<" "<<a.y<<endl;
	cout<<b.x<<" "<<b.y<<endl;

	return 0;
}



/*
OUTPUT:	10 20
		30 40
		11 25
		31 45
*/