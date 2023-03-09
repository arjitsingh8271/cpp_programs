/* 
for loop

syntax:	for (initialization; condition; update) 
		{
    		// body of-loop; 
		}

Here,
initialization - initializes variables and is executed only once
condition - if true, the body of for loop is executed
if false, the for loop is terminated
update - updates the value of initialized variables and again checks the condition
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

	for (; i <= j; i++)
	{
		cout<<i<<endl;

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