# include <iostream>
using namespace std;

int is_pali(int n, int r)
{
	if (n>0)
	{
		r = (r*10) + (n%10);
		return is_pali(n/10, r);
	}
	return r;
}


int main()
{
	int num, p;
	cout<<"Input: ";
	cin>>num;
	
	p = is_pali(num, 0);
	
	if(p==num)
		cout<<"Yes, it is a Palindrome no."<<endl;
	else
		cout<<"No, it is not a Palindrome no."<<endl;
}



/*
	Input: 121
	Yes, it is a Palindrome no.

	Input: 1234
	No, it is not a Palindrome no.
*/