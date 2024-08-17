# include <iostream>
using namespace std;

int devision(int x, int y)
{
	if(y==0)
		throw 1;
	return x/y;
}

int main()
{
	int a=10, b=0, c;

	try
	{
		c = devision(a,b);
		cout<<c<<endl;
	}
	
	catch(int e)
	{
		cout<<"Error occursed"<<endl;
	}

	cout<<"Always executed"<<endl;

}