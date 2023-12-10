#include <iostream>
using namespace std;

int main()
{

	string s1="Arjit ";
	string s2="Kumar ";
	string s3="Singh";

	s1=s1.append(s2);   // Concatenating string s1 + s2 = s1;
	s1=s1.append(s3);   // Concatenating string s1 + s2 = s1 + s3 = s1;

	cout<<s1<<endl;
	cout<<s2<<endl;
	cout<<s3<<endl;

	return 0;

}