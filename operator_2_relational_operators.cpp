/* 
Relational Operators
it returns True '1' and False '0'
*/

#include<iostream>
using namespace std;

int main()
{
	int a=4,b=5;

	cout<<"a == b is: "<<(a==b)<<endl;    // Equal to
	cout<<"a != b is: "<<(a!=b)<<endl;    // Not equal
	cout<<"a < b is: "<<(a<b)<<endl;      // Less than
	cout<<"a > b is: "<<(a>b)<<endl;      // Greater than
	cout<<"a <= b is: "<<(a<=b)<<endl;    // Less than equal to
	cout<<"a >= b is: "<<(a>=b)<<endl;    // Greater than equal to

	return 0;
}



/*
OUTPUT: a == b is: 0                                                              
		a != b is: 1
		a < b is: 1
		a > b is: 0
		a <= b is: 1
		a >= b is: 0
*/
