/*
While loop:

Syntax:		while (condition) 
			{
    			// body of the loop;
			}

Here,
A while loop evaluates the condition.
If the condition evaluates to true, the code inside the while loop is executed.
The condition is evaluated again.
This process continues until the condition is false.
When the condition evaluates to false, the loop terminates.
*/

#include <iostream>
using namespace std;

int main()
{
	int i,j;

	cout<<"Enter a digit to start: ";
	cin>>i;
	cout<<"Up to: ";
	cin>>j;

	while(i<=j)
	{
		cout<<i<<endl;
		i++;
	}

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