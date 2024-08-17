/*
Virtual function (Run-time Polymorphism):

A virtual function is a member function in the base class which is re-defined (overridden) by a derived class. 

Rules for Virtual Functions:

1.Virtual functions cannot be static.
2.A virtual function can be a friend function of another class.
3.Virtual functions should be accessed using pointer or reference of base class type to achieve runtime polymorphism.
4.The prototype of virtual functions should be the same in the base as well as derived class.
5.Virtual functions are always defined in the base class and overridden in a derived class. 
It is not mandatory for the derived class to override (or re-define) the virtual function, 
in that case, the base class version of the function is used.
6.A class may have virtual destructor but it cannot have a virtual constructor.
*/

# include <iostream>
using namespace std;

class Base
{
public:
	virtual void print()
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
	Base *b1 = new Derived;
	b1->print();	// if the Base clase function void print() is not virtual 
					// then it print "Base class function"
					// Otherwise it print "Derived class function"

	// if the derived class not override the function then it will print "Base class function"

}




/*
OUTPUT:	Derived class function
*/