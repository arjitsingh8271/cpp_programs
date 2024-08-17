# include <iostream>
//# include <cstring>
using namespace std;

int main()
{
	string s1 = "Arjit";
	char c1[6] = "Arjit";

	cout<<s1.size()<<endl;		// -> 5
	cout<<s1.length()<<endl;	// -> 5
	
	// # include <cstring> for strlen
	//cout<<strlen(c1)<<endl;		// -> 5

	return 0;
}