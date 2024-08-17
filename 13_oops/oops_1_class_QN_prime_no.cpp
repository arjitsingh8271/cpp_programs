# include <iostream>
using namespace std;


class prime
{
	int num;

	public:
		string is_prime(int n);
};

string prime :: is_prime(int n)
{
	if (n <= 1)
		return "No";

	for(int i=2 ; i*i<=n ; i++)
	{
		if(n%i == 0)
			return "No";
	}

	return "Yes";
}


int main()
{
	int n;
	cout<<"Input: ";
	cin>>n;

	prime p;
	cout<<p.is_prime(n)<<endl;

	return 0;
}


/*
Input: 2
Yes

Input: 1
No

Input: 3
Yes
*/