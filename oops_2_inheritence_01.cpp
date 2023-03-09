/*
Inheritence:
it allows us to creat a new class (derived class)
from on existing class (base class).
*/

# include <iostream>
using namespace std;

class Base		// Base / Parent class
{
public:
	int a;
	void display()
	{
		cout<<"Display from Base Class "<<a<<endl;
	}
};

class Derived : public Base		// Derived / Child class
{
public:
	void show()
	{
		cout<<"Show from Derived Class "<<endl;
	}
};

int main()
{
	Derived d1;
	
	d1.a=10;
	d1.display();

	d1.show();
}
