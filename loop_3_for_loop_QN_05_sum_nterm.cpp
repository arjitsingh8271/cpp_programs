/*
sum of 1 + 1/2 + 1/3 + 1/4 + ... upto nth term
*/

# include<iostream>
using namespace std;

int main()
{
	int n; 
	double sum=0.0;
	cout<<"Input: ";
	cin>>n;

	for(int i=1 ; i<=n ; i++)
	{
		// term = 1.0/i;
		// sum += term;
		sum += 1.0/i;
		cout<<sum<<endl;
	}

	return 0;
}


/*
OUTPUT: Input: 5
		1
		1.5
		1.83333
		2.08333
		2.28333
*/