// Maximum of three numbersinput by user

#include<iostream>
using namespace std;

int main()
{
	int a,b,c;

	cout<<"Enter three numbers to find maximum"<<endl;
	cin>>a>>b>>c;

	if (a>b)
	{
		if (a>c)
		{
			cout<<"a is the maximum of three no.: "<<a<<endl;
		}
		else
			cout<<"c is the maximum of three no.: "<<c<<endl;
	}

	else
		if(b>c)
		{
			cout<<"b is the maximum of three no.: "<<b<<endl;
		}
		else
			cout<<"c is the maximum of three no.: "<<c<<endl;

	return 0;
}