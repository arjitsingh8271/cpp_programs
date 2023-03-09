// swap two numbers without third vatiable using call by reference function

# include <iostream>
using namespace std;

void swap(int &x, int &y)
{
	x = x+y;
	y = x-y;
	x = x-y;
}

int main()
{
	int a, b;
	cin>>a>>b;
	cout<<endl;

	cout<<"Before swaping: "<<endl;
	cout<<"a: "<<a<<"  "<<"b: "<<b<<endl;
	
	swap(a, b);
	cout<<"After swaping: "<<endl;
	cout<<"a: "<<a<<"  "<<"b: "<<b<<endl;

	return 0;
}



/*
OUTPUT: 5 4

		Before swaping: 
		a: 5  b: 4
		After swaping: 
		a: 4  b: 5
*/