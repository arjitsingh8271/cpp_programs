/*
Bitwise Operator (Part 1)

*Note: Bitwise Operator return Decimal values.

&	Binary AND
|	Binary OR
^	Binary XOR
~	Binary One's Complement
<<	Binary Left Shift
>>	Binary Right Shift

AND (&)		OR 	(|)		XOR (^)
-------		-------		-------
x y   &		x y   | 	x y   ^
0 0 : 0 	0 0 : 0 	0 0 : 0
0 1 : 0 	0 1 : 1 	0 1 : 1
1 0 : 0 	1 0 : 1 	1 0 : 1
1 1 : 1 	1 1 : 1 	1 1 : 0	

*/

# include<iostream>
using namespace std;

int main()
{
	int x=3, y=6;

	cout<<(x&y)<<endl;		// O/p: 2
	cout<<(x|y)<<endl;		// O/p: 7
	cout<<(x^y)<<endl;		// O/p: 5

	return 0;
}


/*	Examine

	x: 0 0 1 1  i.e (3)
	y: 0 1 1 0  i.e (6)
	----------
(x&y): 0 0 1 0  i.e (2)

	x: 0 0 1 1  i.e (3)
	y: 0 1 1 0  i.e (6)
	----------
(x|y): 0 1 1 1  i.e (7)

	x: 0 0 1 1  i.e (3)
	y: 0 1 1 0  i.e (6)
	----------
(x^y): 0 1 0 1  i.e (5)

*/
