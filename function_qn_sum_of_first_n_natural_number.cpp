/*
Natural no. counting no. is natural no.
eg: 1, 2, 3, 4, 5, ... n

sum of natural no.
5 : 1+2+3+4+5 = 15

formula for sum of n natural no.
	n*(n+1)/2
	
	5*(5+1)/2
	5*3
	15
*/

# include <iostream>
using namespace std;

int fun1(int n)
{
	return n*(n+1)/2;
}

int fun2(int n)
{
	int sum = 0;
	for(int i=1 ; i<=n ; i++)
		sum = sum + i;

	return sum;
}

int fun3(int n)
{
	int sum=0;
	for(int i=1 ; i<=n ; i++)
		for(int j=1 ; j<=i ; j++)
			sum++;					//sum: 1 + (1+1) + (1+1+1)

	return sum;
}

int main()
{
	int num, op;
	cin>>num;
	
	cout<<fun1(num)<<endl;
	cout<<fun2(num)<<endl;
	cout<<fun3(num)<<endl;
}



/*
OUTPUT:	3
		6
		6
		6
*/