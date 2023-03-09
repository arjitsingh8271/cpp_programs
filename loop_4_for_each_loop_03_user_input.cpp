#include <iostream>
using namespace std;

int main()
{
	int a[5];

	for(int &x:a)
	{
		cin>>x;
	}

	for(int x:a)
	{
		cout<<x<<endl;
	}
}