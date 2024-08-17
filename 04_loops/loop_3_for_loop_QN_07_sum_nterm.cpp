/*
sum of 1 + 1/2! + 1/3! + 1/4! + ... upto nth term
*/

# include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Input: ";
	cin>>n;

	double sum=0;

	for(int i=1 ; i<=n ; i++)
	{
		int fact = 1;
		for(int j=1 ; j<=i ; j++)
		{
			fact *=j;
		}
		sum += 1.0/fact;
		cout<<sum<<endl;
	}

	return 0;
}



/*
OUTPUT: Input: 5
		1
		1.5
		1.66667
		1.70833
		1.71667
*/