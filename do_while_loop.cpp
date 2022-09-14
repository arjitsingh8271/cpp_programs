//do while loop

#include<iostream>
using namespace std;

int main()
{
	int i,j;
	cout<<"Enter first to last: "<<endl;
	cin>>i>>j;

	do
	{
		cout<<i<<endl;
		i++;
	}while(i<=j);

	return 0;
}