# include <iostream>
using namespace std;

int main()
{
	int a=10, b=0, c;

	try
	{
		if(b==0)
			throw string("ERROR");
		c = a/b;
		cout<<c<<endl;
	}
	
	catch(string e)
	{
		cout<<"Error occursed "<<e<<endl;
	}

	cout<<"Always executed"<<endl;

}