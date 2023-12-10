#include <iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Input: ";
	cin>>n;

	int fact=1;

	for(int i=1 ; i<=n ; i++)
	{
		fact = fact * i;
	}

	cout<<fact<<endl;

	return 0;
}



/*
OUTPUT: Input: 5
		120

		Input: 0
		1
*/