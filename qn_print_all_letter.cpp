#include<iostream>

using namespace std;

int main()
{
	char g;
	for (char g="\u0370"; g<="\u03FF"; g++)
	{
		cout<<g<<" ";
	}
	cout<<endl;

	return 0;
}
