// Pointers

#include<iostream>
using namespace std;

int main()
{
	int a = 5;         // * is Dereference of operator
	int* b= &a;        // & is Address of operator
	
	cout<<"The Value of a is: "<<a<<endl;   // to print value of a
	cout<<"The Address of a is: "<<&a<<endl;   // to print address of a
	cout<<"The Address of a is: "<<b<<endl;    // to print address of a
	cout<<"The value at address of a is: "<<*b<<endl;    // to print value at address of a

// Pointer to Pointer
	
	int** c = &b;
	cout<<"The Address of b is: "<<&b<<endl;   // to print address of a
	cout<<"The Address of b is: "<<c<<endl;    // to print address of b
	cout<<"The value at address of b is: "<<**c<<endl;    // to print value at address of b

	int*** d = &c;
	cout<<"The Address of c is: "<<&c<<endl;   // to print address of a
	cout<<"The Address of c is: "<<d<<endl;    // to print address of c
	cout<<"The value at address of c is: "<<***d<<endl;    // to print value at address of c

	// int****....and <<...****e<<   .....   so on
	
	return 0;
}