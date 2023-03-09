# include <iostream>
using namespace std;

bool isPalindrome(int x)
{
	int reverse=0, temp=x;
	while (temp > 0)
	{
		int lastDigit = temp % 10;
		reverse = (reverse * 10) + lastDigit;
		temp = temp / 10;
	}

	return (x==reverse);
}

int main()
{
	int a;
	cin>>a;
	cout<<isPalindrome(a)<<endl;
}



/*
OUTPUT: 121
		1

		123
		0
*/
