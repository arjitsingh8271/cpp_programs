// swap two numbers using call by address function

#include <iostream>
using namespace std;

void swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
int main()
{
	int a=11,b=22;
	cout<<"Before swaping: "<<endl;
	cout<<"a: "<<a<<"  "<<"b: "<<b<<endl;

	swap(&a, &b);		// sending the address of a and b.
	cout<<"After swaping: "<<endl;
	cout<<"a: "<<a<<"  "<<"b: "<<b<<endl;
	
	return 0;
}



/*
OUTPUT: Before swaping: 
		a: 11  b: 22
		After swaping: 
		a: 22  b: 11
*/