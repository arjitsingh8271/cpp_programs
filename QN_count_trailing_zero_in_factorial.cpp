# include <iostream>
using namespace std;

int checkFact(int x)
{
	int fact=1;
	for (int i=x ; i >= 1 ; i--)
	{
		fact *=i;
	}

	return fact;
}

int checkZeros(int x)
{
	int count=0;

	while(x%10==0)
	{
		count++;
		x /=10;
	}

	return count;
		
}

int main()
{
	int a;
	cin>>a;
	cout<<checkFact(a)<<endl;
	cout<<checkZeros(checkFact(a))<<endl;
}



/*
INPUT:	5
OUTPUT:	120
		1

INPUT:	10
OUTPUT:	3628800
		2
*/
