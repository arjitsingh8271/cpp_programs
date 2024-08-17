// Sum of first n Natural numbers using do while loop

# include <iostream>
using namespace std;

int main()
{
	int a, sum=0;
	cin>>a;

	do
	{
		sum = sum + a;
		a--;
	} while(a>0);

	cout<<sum<<endl;

	return 0;
}




/*
OUTPUT: 5
		15
*/