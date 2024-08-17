# include <iostream>
using namespace std;

int main()
{
	string s;
	cin>>s;
	int count=0;

	cout<<s<<endl;

	string v;
	
	for(int i=0 ; i<s.size() ; i++)
	{
		if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
			v = v+s[i];
	}

	for(int i=0 ; i<s.size() ; i++)
	{
		if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
		{	
			s[i] = v[v.size()-1-count];
			count++;
		}
	}

	cout<<s<<endl;

	return 0;
}