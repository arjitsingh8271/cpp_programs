#include<iostream>
using namespace std;

int main()
{
	float a[] = {1,2.33,3,.2225,5,3.22};

	for(auto x:a)
	{
		cout<<x<<endl;
	}
	cout<<endl;

	char b[] = {'A',66,'C',68};

	for(auto y:b)
	{
		cout<<y<<endl;
	}
	cout<<endl;
	
	char c[] = {'A',66,'C',68};

	for(int z:c)
	{
		cout<<z<<endl;
	}

	return 0;
}