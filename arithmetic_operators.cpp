// Arithmetic Operators

#include<iostream>
using namespace std;

int main()
{
	int a=4,b=5;

	cout<<"The value of a + b is:"<< a+b <<endl;   // Addition operator
	cout<<"The value of a - b is:"<< a-b <<endl;   // Substraction operator
	cout<<"The value of a * b is:"<< a*b <<endl;   // Multiplication operator
	cout<<"The value of a / b is:"<< a/b <<endl;   // Division operator
	cout<<"The value of a % b is:"<< a%b <<endl;   // Modulas, Remainders operator
	cout<<"The value of a++ is:"<< a++ <<endl;     // Postfix increment operator
	cout<<"The value of a-- b is:"<< a-- <<endl;   // Postfix decrement operator
	cout<<"The value of ++a b is:"<< ++a <<endl;   // Prefix increment operator
	cout<<"The value of --a b is:"<< --a <<endl;   // Prefix decrement operator
	
	return 0;
}