/*
Do while loop

Syntax: do
		{
			// body of loop;
		}while (condition);

Here,
The body of the loop is executed at first. Then the condition is evaluated.
If the condition evaluates to true, the body of the loop inside the do statement is executed again.
The condition is evaluated once again.
If the condition evaluates to true, the body of the loop inside the do statement is executed again.
This process continues until the condition evaluates to false. Then the loop stops.
*/
#include<iostream>
using namespace std;

int main()
{
	int i,j;
	cout<<"Enter a digit to start: ";
	cin>>i;
	cout<<"Up to: ";
	cin>>j;

	do
	{
		cout<<i<<endl;
		i++;
	} while(i<=j);

	return 0;
}




/*
OUTPUT: Enter first digit to start: 1
		Up to: 5
		1
		2
		3
		4
		5
*/