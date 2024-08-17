# include<iostream>
using namespace std;

string str_to_low_cse(string s)
{
	for(int i=0; i<s.size(); i++)
	{
		if(s[i] >= 97 && s[i] <=122)
			continue;
		s[i] = s[i]+32;
	}
	return s;
}


int main()
{
	string str;
	cin>>str;
	
	cout<<str_to_low_cse(str)<<endl;
	
	return 0;
}
