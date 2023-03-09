/*
Pointers:
Pointers are variable that store the memory address of other variable.

If we have a variable 'a' in our program, '&a' will give us its address in the memory.
'*' is known as pointer
eg: int* integer type pointer 
	float* float type pointer 
	double* double type pointer
	char* character type pointer 
	string* string type pointer 
'&' is known as address-of operator
*/

#include<iostream>
using namespace std;

int main()
{
	int a = 5;          // * is Dereference of operator
	int* p = &a;        // & is Address of operator
	// int *c = 10;		not posible because pointers points only addresses
	
	cout<< a <<endl;		// Value of a: 5
	cout<< &a <<endl;		// Address of a: 0x7ffeb86e7aa8 (&a)
	cout<< p <<endl;		// value of p: 0x7ffeb86e7aa8 (&a)
	cout<< *p <<endl;		// value of *p: 5
	cout<< &p <<endl;		// Address of p: 0x7fff155dc8c0 (&p)
	cout<<endl;


	int b = *p;			// means b = 5
	cout<< b <<endl;		// Value of b: 5
	b++;
	cout<< b <<endl;		// Value of b++: 6
	cout<< *p <<endl;		// Value of *p: 5
	cout<<endl;


	*p = 10;
	cout<< a <<endl;		// Value of a: 10
	cout<< *p <<endl;		// Value of *p: 10
	cout<< b <<endl;		// Value of b: 6
	cout<<endl;


	int *q = p;
	cout<< *q <<endl;		// Value of *q: 10
	cout<< q <<endl;		// Value of q: 0x7ffeb86e7aa8 (&a)
	cout<< &q <<endl;		// Address of q: 0x7ffc519ce670 (&q)
	cout<<endl;


	int *r;
	cout<< *r <<endl;		// Value of *r: random grabage value
	cout<< r <<endl;		// Value of r: ramdom grabage address
	cout<< &r <<endl;		// Address of r: 0x7ffef2b8c168 (&r)
	cout<<endl;


	int *s = 0;		// means Null pointer
	cout<< s <<endl;		// value of s: 0
	cout<< &s <<endl;		// Address od s: 0x7ffd035ac410 (&s)
	cout<< *s <<endl;		// Value of *s: Error Segmentation fault (core dumped)
	
	return 0;
}



/*
OUTPUT: 5
		0x7ffeb86e7aa8
		0x7ffeb86e7aa8
		5
		0x7ffeb86e7ab0

		5
		6
		5

		10
		10
		6

		10
		0x7ffeb86e7aa8
		0x7ffc519ce670

		2147071032
		0x7fa97ffa0e88
		0x7ffef2b8c168

		0
		0x7ffd035ac410
		Segmentation fault (core dumped)
*/