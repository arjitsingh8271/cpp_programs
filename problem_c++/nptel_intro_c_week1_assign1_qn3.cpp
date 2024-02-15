/*
Given the coefficients of a pair of linear equations,
a1 x + b1 y = c1
a2 x + b2 y = c2
Find the solutions to x and y

Input:
Input consists two lines.
The first line contains coefficients of first equation, a1 b1 c1 in that order
The second line contains coefficients of second equation, a2 b2 c2 in that
order

Output:
The solutions to x and y.
*/


# include <iostream>
using namespace std;

int main()
{
	int a1,b1,c1;
	cin>>a1>>b1>>c1;
	int a2,b2,c2;
	cin>>a2>>b2>>c2;

	int x= ((c1*b2) - (b1*c2)) / ((a1*b2) - (b1*a2));
	int y= ((a1*c2) - (c1*a2)) / ((a1*b2) - (b1*a2));

	cout<<x<<" "<<y<<endl;

	return 0;
}


/*
INPUT:	2 3 7
		4 -2 6
OUTPUT:	2 1
*/


/* examin

a1  b1 = c1
a2  b2 = c2

	c1*b2 - b1*c2
x = -------------
	a1*b2 - b1*a2

	a1*c2 - c1*a2
y = -------------
	a1*b2 - b1*a2
*/