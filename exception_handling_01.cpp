/*

*/
# include <iostream>
using namespace std;

int main()
{
	int a=10, b=0, c;

	try
	{
		if(b==0)
			throw 1;	// we can throw anything like int, float, double, string, char, obj of class ..
		c = a/b;
		cout<<c<<endl;
	}
	
	catch(int e)
	{
		cout<<"Error occursed"<<endl;
	}

	cout<<"Always executed"<<endl;

}