// Increment/Decrement Operators

#include<iostream>
using namespace std;

int main()
{
	int a=4;

	cout<<"a is: "<<a<<endl;
	cout<<"a++ is: "<< a++ <<endl;   // Postfix increment operator
	cout<<"a is: "<<a<<endl;
	cout<<"a-- is: "<< a-- <<endl;   // Postfix decrement operator
	cout<<"a is: "<<a<<endl;
	cout<<"++a is: "<< ++a <<endl;   // Prefix increment operator
	cout<<"a is: "<<a<<endl;
	cout<<"--a is: "<< --a <<endl;   // Prefix decrement operator
	cout<<"a is: "<<a<<endl;

	return 0;
}



/*
OUTPUT: a is: 4
		a++ is: 4
		a is: 5
		a-- is: 5
		a is: 4
		++a is: 5
		a is: 5
		--a is: 4
		a is: 4
*/