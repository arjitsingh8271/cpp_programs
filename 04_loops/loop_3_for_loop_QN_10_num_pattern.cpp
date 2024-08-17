# include <iostream>
using namespace std;

int main()
{
	int n, temp=0;
	cin>>n;

	cout<<n<<" ";
	for(int i=n ; i>=1 ; i-=5)
	{
		if(i>0)
			temp = i-5;
			cout<<temp<<" ";
	}

	for(int j=temp ; j<=n ; j+=5)
	{
		if(j<n)
		cout<<j+5<<" ";
	}

	cout<<endl;

	return 0;
}



/*
OUTPUT: 16
		16 11 6 1 -4 1 6 11 16
*/