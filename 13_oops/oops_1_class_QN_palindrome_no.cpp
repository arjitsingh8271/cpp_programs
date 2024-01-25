/*
Palindrome Number
eg: 121 = 121
	-121 != 121-
	10 != 01
	9 = 9
*/

# include <iostream>
using namespace std;

class Solution
{
	int num;
public:
	Solution(){};
	Solution (int num)
	{
		this-> num = num;
	}

	bool isPalindrome()
	{
		int reverse=0, temp = num, lastDigit=0;
		
		while(temp > 0)
		{
			lastDigit = temp % 10;
			reverse = (reverse * 10) + lastDigit;
			temp = temp / 10;
		}

		return (num == reverse);
	}
	~Solution(){}
};

int main()
{
	int a;
	cin>>a;
	Solution s(a);
	cout<<s.isPalindrome()<<endl;

}



/*
OUTPUT: 121
		1

		134
		0
*/