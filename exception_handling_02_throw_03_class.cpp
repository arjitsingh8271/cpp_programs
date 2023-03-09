
# include <iostream>
using namespace std;

class Myclass
{

};

int main()
{
	int a=10, b=0, c;

	try
	{
		if(b==0)
			throw Myclass();
		c = a/b;
		cout<<c<<endl;
	}
	
	catch(Myclass e)
	{
		cout<<"Error occursed "<<endl;
	}

	cout<<"Always executed"<<endl;

}