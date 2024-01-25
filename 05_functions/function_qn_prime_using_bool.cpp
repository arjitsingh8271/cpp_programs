#include <iostream>
using namespace std;

bool prime(int num1)
{   if(num1<=1)
	{
		return false;
	}
	for (int i = 2; i*i<=num1 ; i++)
	{
		if((num1%i)==0)
			return false;
	}
	return true;
}

int main()
{
	int n;
	cout<<"Enter a no. to check it is Prime or Not: ";
	cin>>n;

	if(prime(n))
	{
		cout<<n<<" is a Prime no."<<endl;
	}
	else
	{
		cout<<n<<" is not a Prime no."<<endl;
	}

	return 0;
}