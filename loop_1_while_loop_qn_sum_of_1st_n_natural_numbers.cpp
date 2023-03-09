// Sum of first n Natural numbers using while loop

# include <iostream>
using namespace std;

int main()
{
	int a, sum=0;
	cin>>a;

	while(a>0)
	{
		sum += a;
		a--;
	}

	cout<<sum<<endl;

	return 0;
}




/*
OUTPUT: 5
		15
*/