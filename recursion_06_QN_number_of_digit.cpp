# include<iostream>
using namespace std;

int count_digi(int n)
{
	if(n/10==0)
		return 1;
	return 1 + count_digi(n/10);
}

int main()
{
	int n;
	cin>>n;
	cout<<count_digi(n)<<endl;
}



/*	Examine

Let n=123 	|	O/p: 3

if(123/10==0) No
	-----
return 1 + f(123/10)	| return 1 + 2 (3)

	if(12/10==0) No
		-----
	return 1 + f(12/10)	 	| return 1 + 1 (2)

		if(1/10==0) Yes		
			return 1; 	-----------------^

*/