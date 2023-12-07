# include<iostream>
using namespace std;

int main()
{
	int n, i=1;
	cin>>n;

	while(i<=n)
	{
		if(n%i==0)
			cout<<i<<" ";
		i++;
	}
	cout<<endl;
	
	return 0;
}



/*
OUTPUT: 15
		1 3 5 15
*/
