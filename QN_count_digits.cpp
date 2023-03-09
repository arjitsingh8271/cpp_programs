/*
Explain: 

INPUT:	3344

		while (x>0)
		1st x = x/10 (3344/10) = 334  	count++ count = 1
		2sd x = x/10 (334/10) = 33 		count++ count = 2
		3nd x = x/10 (33/10) = 3 		count++ count = 3
		4th x = x/10 (3/10) = 0 		count++ count = 4

		return count;

OUTPUT: 4
*/


# include <iostream>
using namespace std;

int countDigit(int x)
{
	int r=0;
	while(x>0)
	{
		x = x/10;
		r++;
	}

	return r;
}

int main()
{
	int a;
	cout<<"Enter a number: ";
	cin>>a;

	cout<<countDigit(a)<<endl;
}


/*
OUTPUT: Enter a number: 3344                                                    
		4
*/