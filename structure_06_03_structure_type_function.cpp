// Returning a pointer to a structure from the function

#include <iostream>
using namespace std;

struct abc
{
	int x;
	int y;
};

//struct abc fun(struct abc p)		// for C language
abc *fun(int m, int n)
{
	// struct abc *ptr = (struct abc *)malloc(sizeof(struct point));	// for C language
	abc *ptr = new abc;
	ptr->x = m;
	ptr->y = n+5;

	return ptr;
}

void printData(abc *ptr)
{
	// printf("%d %d\n", ptr->x, ptr->y);	// for C language
	cout<<ptr->x<<" "<<ptr->y<<endl;
}

int main()
{
	abc *a, *b;

	a = fun(1, 2);
	b = fun(3, 4);

	printData(a);
	printData(b);

	delete(a);		// free(a);  // for C language
	delete(b);

	return 0;
}



/*
OUTPUT:	1 7
		3 9
*/