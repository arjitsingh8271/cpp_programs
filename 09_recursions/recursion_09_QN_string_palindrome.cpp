/*

e.g: 	madam == madam 	i.e palindrome
		apple != elppa		not a palindrome
		121 == 121			is a palindrome
		123 != 123			not a palindrome

*/


# include<iostream>
# include<cstring>

using namespace std;

bool pldm(int i, string &s)
{
	if(i >= s.size()/2)
		return true;
	if(s[i] != s[s.size()-i-1])
		return false;

	return pldm(i+1, s);
}
int main()
{
	string s;
	cin>>s;

	cout<<pldm(0, s)<<endl;

	return 0;
}


/*	Examine

let s = madam, i=0, s.size=5 	|	O/p: 1 	i.e True
index	01234

if(0 >= 5/2) No
	----
if(s[0] != s[5-0-1]) No		i.e (m != m)
	----
return f(1, s)	| 	return True

	if(1 >= 5/2) No
		----
	if(s[1] != s[5-1-1]) No		i.e (a != a)
		----
	return f(2, s)	|	return True

		if(2 >= 5/2) Yes
			return True	----^
*/


/*	Examine

let s = madsm, i=0, s.size=5 	|	O/p: 0 	i.e False
index	01234

if(0 >= 5/2) No
	----
if(s[0] != s[5-0-1]) No		i.e (m != m)
	----
return f(1, s)	| 	return False

	if(1 >= 5/2) No
		----
	if(s[1] != s[5-1-1]) Yes		i.e (a != s)
		return False	----^
*/