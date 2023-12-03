/*
sum of 1 - 1/2 + 1/3 - 1/4 + ... upto nth term
*/

# include<iostream>
using namespace std;

int main()
{
	int n;
	//cout<<"Input: ";
	cin>>n;
	double sum=0;

	for(int i=1 ; i<=n ; i++)
	{
		if(i%2==0)
			sum -= 1.0/i;
		else
			sum += 1.0/i;
		
		cout<<sum<<endl;
	}

	return 0;
}


/*
OUTPUT: Input: 5
		1
		0.5
		0.833333
		0.583333
		0.783333
*/