/*
Function is a mini-program in a program
A function is a block of code which only run when its call

syntax:
	returnType functionName (parameters ...)
	{
		// body
	}
*/

#include<iostream>
using namespace std;

// Function prototype / declaration

// int sum(int num1,int num2);  			// Acceptable
int sum(int, int);              			// Acceptable
//int sum(int num1, num2);      			// Not Acceptable


int main()
{
	int a,b,c;               				// here 'a' and 'b' is Actual Parameters
	cout<<"Enter two number to find sum: ";
	cin>>a>>b;

	c = sum(a,b);							// Function call
	cout<<"The sum is: "<<c<<endl;

	return 0;
}

// Function Defination

int sum(int num1, int num2)  				// Formal Parameters here 'num1' and 'num2' will be taking value from actual patameters
{
	int num3 = num1 + num2;
	return num3;
}




/*
OUTPUT: Enter two number to find sum: 5 6
		The sum is: 11
*/