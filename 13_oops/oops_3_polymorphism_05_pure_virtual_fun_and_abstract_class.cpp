/*
Pure virtual function:
A virtual function whose declaration ends with =0 
and has no body is called PURE VIRTUAL FUNCTION

Abstact class:
A class that contain at least one PURE VIRTUAL FUNCTION is 
called ABSTRACT CLASS 
*/


# include <iostream>
using namespace std;

class Base
{
public:
	virtual void print() =0;
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
	b1->print();

}




/*
OUTPUT:	Derived class function
*/