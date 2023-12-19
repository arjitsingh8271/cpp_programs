# include<iostream>
using namespace std;

string rm_vowel(string s)
{
	string s1;
	for(int i=0; i<s.size(); i++)
	{
		if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
		continue;
		
		else if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
		continue;
		
		else
			s1 +=s[i];
	}
	
	return s1;
}

int main()
{
	string name;
	getline(cin, name);
	
	cout<<rm_vowel(name)<<endl;
	
	return 0;
}



/*
OUTPUT: Arjit Kumar Singh
		rjt Kmr Sngh
*/

