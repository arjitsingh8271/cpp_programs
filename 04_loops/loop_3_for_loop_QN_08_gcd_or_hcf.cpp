/*
15 is divisible by 1,3,5,15
25 is divisible by 1,5,25

so Greatest Common Divisor or HCF is 5
*/


# include<iostream>
using namespace std;

int main()
{
	int n1, n2, gcd=0, temp=0;

	cout<<"Input: ";
	cin>>n1;

	cout<<"Input: ";
	cin>>n2;

	if(n1>n2)
		temp=n1;
	else
		temp=n2;

	for(int i=1 ; i<=temp ; i++)
	{
		if((n1%i==0) && (n2%i==0))
			gcd=i;
	}

	cout<<"GCD: "<<gcd<<endl;

	return 0;
}


/*
OUTPUT: Input: 15
		Input: 25
		GCD: 5
*/