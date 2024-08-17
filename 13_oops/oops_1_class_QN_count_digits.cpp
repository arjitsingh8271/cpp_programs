# include <iostream>
using namespace std;

class Solution
{
public:
	int countDigit(int x)
	{
		int r=0;
		while(x>0)
		{
			x /=10;
			r++;
		}

		return r;
	}
};


int main()
{
	int a;
	cin>>a;

	Solution s;
	cout<<s.countDigit(a)<<endl;
}



/*
OUTPUT: 1234
		4
*/
