// find factorial of a number ?

#include<iostream>
using namespace std;

int main()
{
	int n,ans=1;
	cout<<"Enter a number for factorial: ";
	cin>>n;

	cout<<"Formula of n! = 1*2*3*4*....n"<<endl;
	for (int i = 1; i <= n; i++)
	{
		ans *=i;                        //  ans = ans * i
	}
	
	cout<<n<<"! = "<<ans<<endl;

	ans = 1;
	cout<<"Formula of n! = n*(n-1)*(n-2)*(n-3)*....1"<<endl;
	for (int i = n; i >= 1; i--)
	{
		ans *=i;                        //  ans = ans * i
	}

	cout<<n<<"! = "<<ans<<endl;

	return 0;
}