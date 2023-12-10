# include <iostream>
using namespace std;

class Base
{
public:
	
	Base()
	{
		cout<<"Default of Base Class"<<endl;
	}

	Base(int a)
	{
		cout<<"Parameterized of Base Class "<<a<<endl;
	}

	~Base()
	{
		cout<<"Base destructor"<<endl;
	}
};

class Derived : public Base
{
public:
	
	Derived()
	{
		cout<<"Default of Derived Class"<<endl;
	}

	Derived(int b)
	{
		cout<<"Parameterized of Derived Class "<<b<<endl;
	}

	Derived(int a, int b) : Base(a)
	{
		cout<<"Parameterized of Derived Class "<<b<<endl;
	}

	~Derived()
	{
		cout<<"Derived destructor"<<endl;
	}

};

int main()
{
	Derived d1;			
	cout<<endl;
	
	Derived d2(10);	
	cout<<endl;

	Derived d3(20,10);	
}



/*
OUTPUT:	Default of Base Class
		Default of Derived Class

		Default of Base Class
		Parameterized of Derived Class 10

		Parameterized of Base Class 20
		Parameterized of Derived Class 10
		Derived destructor
		Base destructor
		Derived destructor
		Base destructor
		Derived destructor
		Base destructor
*/