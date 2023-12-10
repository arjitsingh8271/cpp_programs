/*

Factorial of 5
5*4*3*2*1 	i.e 120

*/

# include<iostream>
using namespace std;

int fact(int n)
{
	if(n==1)
		return 1;
	return n * fact(n-1);
}


int main()
{
	int n;
	cin>>n;
	cout<<fact(n)<<endl;

	return 0;
}


/*
	
Let n=5		|	O/p: 120

if(5==1) No
	----
return 5 * f(5-1)	| return 5 * 24 (120)
	
	if(4==1) No
		----
	return 4 * f(4-1)	| return 4 * 6 (24)

		if(3==1) No
			----
		return 3 * f(3-1)	| return 3 * 2 (6)

			if(2==1) No
				----
			return 2 * f(2-1)	| return 2 * 1 (2)

				if(1==1) Yes
					return 1;	-------------^


*/

