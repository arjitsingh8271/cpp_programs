# include <iostream>
using namespace std;

class Dividing
{
public:
	int a;
	int b;

	Dividing(int a=0, int b=0)
	{
		this-> a = a;
		this-> b = b;
	}

	int display()
	{
		if(b==0)
			throw 1;
		return a/b;
	}

	~Dividing(){};

};

int main()
{
	int a,b;
	
	try
	{
		Dividing d1(10,0);
		a = d1.display();
		cout<<a<<endl;
	}
	catch(int e)
	{
		cout<<"Error occursed"<<endl;
	}

	try
	{
		Dividing d2(10,2);
		b = d2.display();
		cout<<b<<endl;
	}
	catch(int e)
	{
		cout<<"Error occursed"<<endl;
	}

	cout<<"Always executed"<<endl;	
}