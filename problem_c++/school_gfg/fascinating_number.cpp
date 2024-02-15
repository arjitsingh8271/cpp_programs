# include <iostream>

using namespace std;

int fasci_no(int n)
{
	string s = to_string(n*1) + to_string(n*2) + to_string(n*3);

	for(int i=0 ; i<s.size() ; i++)
	{
		cout<<s[i]<<endl;
		if(s[i]!='1' || s[i]!='2' || s[i]!='3' || s[i]!='4' || s[i]!='5' || s[i]!='6' || s[i]!='7' || s[i]!='8' || s[i]!='9')
			return 0;
	}
	return 1;
}


int main()
{
	int num;
	cin>>num;

	cout<<fasci_no(num)<<endl;

	return 0;
}