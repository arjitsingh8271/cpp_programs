/*

series: 1 2 3 4 5 ... n
using backtracking.
*/



# include <iostream>
using namespace std;

void series_print(int n)
{
	if(n==0)
		return;
	else
	{
		series_print(n-1);
		cout<<n<<" ";
	}
}

int main()
{
	int n;
	cin>>n;
	series_print(n);

	cout<<endl;

	return 0;
}




/*	Examine

let n=4 	|	O/p: 1 2 3 4 

if(4==0) No
	----
f(4-1)		| print(4)

	if(3==0) No
		----
	f(3-1)		| print(3)

		if(2==0) N0
			----	
		f(2-1)		| print(2)

			if(1==0) No
				---
			f(1-1)		| print(1)

				if(0==0) yes
			^-----	return 
*/