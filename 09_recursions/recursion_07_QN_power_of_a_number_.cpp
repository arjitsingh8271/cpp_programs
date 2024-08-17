# include <iostream>
using namespace std;

int power_f(int x, int n)
{
	if(n!=0)
		return x * power_f(x,n-1);
	else
		return 1;
}


int main()
{
	int x, n;
	cin>>x>>n;

	cout<<power_f(x,n)<<endl;

	return 0;
}



/*	Examine

Let x=2, n=4 	|	O/p: 16

if(4!=0) Yes
	return 2 * f(2, 4-1)	| return 2 * 8 (16)

	if(3!=0) Yes
		return 2 * f(2, 3-1)	| return 2 * 4 (8)
		
		if(2!=0) Yes
			return 2 * f(2, 2-1)	| return 2 * 2 (4)

			if(1!=0) Yes
				return 2 * f(2, 1-1)	| return 2 * 1 (2)

				if(0!=0) No

				return 1;		---------------------^

*/