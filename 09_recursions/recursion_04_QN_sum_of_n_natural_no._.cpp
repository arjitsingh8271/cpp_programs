/*
sum of n natural no.
5 = 1+2+3+4+5	i.e 15.
*/


# include<iostream>
using namespace std;

int sum(int n)
{
	if(n==0)
		return 0;
	else
		return (n + sum(n-1));
}

int main()
{
	int n;
	cin>>n;

	cout<<sum(n)<<endl;

	return 0;
}


/*	Examine 

Let n=5 	|	O/p: 15

if(5==0) No
	----
return 5 + f(5-1)	| return 5 + 10 (15)

	if(4==0) No
		----
	return 4 + f(4-1)	| return 4 + 6 (10)

		if(3==0) No
			----
		return 3 + f(3-1)	| return 3 + 3 (6)

			if(2==0) No
				----
			return 2 + f(2-1)	| return 2 + 1 (3)

				if(1==0) No
					----
				return 1 + f(1-1)	| return 1 + 0 (1)

					if(0==0) Yes
						return 0;	-------------^

*/