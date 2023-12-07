# include<iostream>
using namespace std;

int main()
{
	int n, digit=0;
	cin>>n;

	while(n>0)
	{
		n/=10;
		digit +=1;
	}

	cout<<digit<<endl;

	return 0;
}



/*
OUTPUT:	1233421
		7
*/
