// Double pointer or pointer to Pointer

#include<iostream>
using namespace std;

int main()
{
	int a = 5;       	
	int *b = &a;
	
	cout<<"The Value of a is: "<< a <<endl;					// print value of a
	cout<<"The Address of a is: "<< &a <<endl;				// print address of a
	cout<<"The Address of a is: "<< b <<endl;				// print address of a
	cout<<"The value at address of a is: "<< *b <<endl;		// print value at address of a
	cout<<endl;


	// Pointer to Pointer
	
	int** c = &b;
	cout<<"The Address of b is: "<< &b <<endl;   			// print address of a
	cout<<"The Address of b is: "<< c <<endl;    			// print address of b
	cout<<"The value at address of b is: "<< **c <<endl;	// print value at address of b
	cout<<endl;

	int*** d = &c;
	cout<<"The Address of c is: "<< &c <<endl;				// print address of a
	cout<<"The Address of c is: "<< d <<endl;				// print address of c
	cout<<"The value at address of c is: "<< ***d <<endl;	// print value at address of c
	cout<<endl;

	// int****....and <<...****e<<   .....   so on
	
	return 0;
}



/*
OUTPUT:	The Value of a is: 5
		The Address of a is: 0x7fff4cc46f6c
		The Address of a is: 0x7fff4cc46f6c
		The value at address of a is: 5

		The Address of b is: 0x7fff4cc46f70
		The Address of b is: 0x7fff4cc46f70
		The value at address of b is: 5

		The Address of c is: 0x7fff4cc46f78
		The Address of c is: 0x7fff4cc46f78
		The value at address of c is: 5
*/