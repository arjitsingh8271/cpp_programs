#include <iostream>
using namespace std;

// Call by reference using pointer

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
	cout<<"the value of a is: "<<a<<endl<<"the value of b is: "<<b<<endl;

	swap(a,b);
	cout<<"After swaping: "<<endl;
	cout<<"the value of a is: "<<a<<endl<<"the value of b is: "<<b<<endl;

	return 0;
}