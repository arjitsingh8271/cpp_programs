/*
Function Overriding:

Redefining a function of Base class again in Derived class
also the prototype must me same.
*/

# include <iostream>
using namespace std;

class Base
{
public:
	void print()
	{
		cout<<"Base class function"<<endl;
	}
};

class Derived : public Base
{
public:
	void print()
	{
		cout<<"Derived class function"<<endl;
	}
};

int main()
{
	Base b1;
	b1.print();

	Derived d1, d2, d3;
	d1.print();
	
	d2.Base::print();	//to access Base class function via Derived class object

	Base *b2 = &d3;		// pointer of Base type that points to d3, vice versa not posible
	b2->print();	    // call function of Base class using b2

}




/*
OUTPUT: Base class function
		Derived class function
		Base class function
		Base class function
*/