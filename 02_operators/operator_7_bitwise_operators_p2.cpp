/*
Bitwise Operator (Part 2)

*Note: Bitwise Operator return Decimal values.

<<	Binary Left Shift
	(its add O's on the Left side in binary bits)
>>	Binary Right Shift
	(its add O's on the Right side in binary bits)
~	Binary One's Complement or Bitwise Not
	(it convert all 0's into 1's and vice versa in binary bits)

*/

# include<iostream>
using namespace std;


int main()
{
	int x=3, y=12;

	// Binary Left Shift Operator
	cout<<(x<<1)<<endl;		// O/p: 6
	cout<<(x<<2)<<endl;		// O/p: 12
	cout<<(x<<4)<<endl;		// O/p: 48

	// Binary Right Shift Operator
	cout<<(y>>1)<<endl;		// O/p: 6
	cout<<(y>>2)<<endl;		// O/p: 3
	cout<<(y>>4)<<endl;		// O/p: 0

	// Binary One's Complement or Bitwise Not
	cout<<(~35)<<endl;		// O/p: -36
	cout<<(~-150)<<endl;	// O/p: 149

	return 0;
}


/* Examine

// Binary Left Shift Operator
(3 << 1)
0 0 0 0 0 0 1 1 << 1
0 0 0 0 0 1 1 0  	i.e: 6 	(x*2^y)
(3 << 2)
0 0 0 0 0 0 1 1 << 1
0 0 0 0 1 1 0 0 	i.e: 12	(x*2^y)
(3 << 4)
0 0 0 0 0 0 1 1 << 1
0 0 1 1 0 0 0 0  	i.e: 48	(x*2^y)


// Binary Right Shift Operator
(8 >> 1)
0 0 0 0 1 1 0 0 >> 1
0 0 0 0 0 1 1 0 	i.e: 6 (x/2^y)
(8 >> 2)
0 0 0 0 1 1 0 0 >> 2
0 0 0 0 0 0 1 1 	i.e: 3 (x/2^y)
(8 >> 4)
0 0 0 0 1 1 0 0 >> 4
0 0 0 0 0 0 0 0 	i.e: 0 (x/2^y)


// Binary One's Complement or Bitwise Not
The bitwise complement of 35 = - (35 + 1) = -36
i.e. ~35 = -36

The bitwise complement of -150 = - (-150 + 1) = - (-149) = 149
i.e. ~(-150) = 149
*/