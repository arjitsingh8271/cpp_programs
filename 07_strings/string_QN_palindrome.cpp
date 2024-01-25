# include <iostream>
using namespace std;

string palindrome(string s)
{
	for(int i=0 ; i<s.size()/2 ; i++)
	{
		if(s[i] != s[s.size()-i-1])
			return "No";
	}

	return "Yes";
}

int main()
{
	string s1;
	cin>>s1;
	cout<<palindrome(s1)<<endl;
}



/*
OUTPUT: arjit
		No

		arjra
		Yes

		Arjra
		No
*/