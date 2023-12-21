/*		compare()

C++ has a built-in compare() function to compare two strings.

*Returns 0 if both the strings are the same.
*Returns < 0 (less than zero) if the value of the character of 
the first string is smaller as compared to the second string input.
*Returns > 0 (greater than zero) when the second 
string is greater in comparison.
*/


# include <iostream>
using namespace std;

int main()
{
	string s1="Arjit";
	string s2="Arjit";
	string s3="Ram";
	string s4="ram";

	cout<<s1.compare(s2)<<endl;			// -> 0
	cout<<s1.compare(s3)<<endl;			// -> -17
	cout<<s3.compare(s4)<<endl;			// -> -32
	cout<<s3.compare(s2)<<endl;			// -> 17
	cout<<s1.compare("Arjit")<<endl;	// -> 0

}



