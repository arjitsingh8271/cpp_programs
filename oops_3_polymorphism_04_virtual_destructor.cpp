# include <iostream>
using namespace std;

class Base
{
public:
	Base()
	{
		cout<<"Base constructor"<<endl;
	}
	virtual ~Base()
	{
		cout<<"Base destructor"<<endl;
	}
};

class Derived : public Base
{
public:
	Derived()
	{
		cout<<"Derived constructor"<<endl;
	}
	~Derived()
	{
		cout<<"Derived destructor"<<endl;
	}
};

int main()
{
	Base b1;
	cout<<endl;
	Derived d1;
	cout<<endl;

	Base *p = new Derived();
	cout<<endl;
	delete p;
}



/*
without virtual				with virtual

OUTPUT: 					OUTPUT:
Base constructor		 	Base constructor

Base constructor			Base constructor
Derived constructor			Derived constructor

Base constructor			Base constructor
Derived constructor			Derived constructor

Base destructor				Derived destructor
Derived destructor			Base destructor
Base destructor				Derived destructor
Base destructor				Base destructor
							Base destructor

*/