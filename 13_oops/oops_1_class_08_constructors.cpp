/*
Constructors:
	A constructor is a special type of member function that is calles automatically when an object is created.
	A constructor has same name as that of the class, it is always Public, and it does not have a return type.

1. Default constructor
2. Parameterized constructor
3. Copy constructor

*/



# include <iostream>
using namespace std;

class Rectangle
{
	int len;
	int bdth;

public:
	Rectangle(){}
	
	// parameterized constructor
	Rectangle(int l, int b)
	{
		len = l;
		bdth = b; 
	}

	// own copy constructor
	Rectangle(Rectangle &obj)
	{
		cout<<"Copy Constructor"<<endl;
		len = obj.len;
		bdth = obj.bdth;
	}

	void display()
	{
		cout<<"Length: "<<len<<endl;
		cout<<"Breadth: "<<bdth<<endl;
	}

	~ Rectangle()
	{
		cout<<"Destructor Called !"<<endl;
	}
};

int main()
{
	// Default Constructor call
	Rectangle r;
	cout<<"r: "<<endl;
	r.display();

	Rectangle *r1 = new Rectangle();
	cout<<"r1: "<<endl;
	(*r1).display();
	cout<<endl;

	// Parameterized Constructor call
	Rectangle r2(10,5);
	cout<<"r2: "<<endl;
	r2.display();
	
	Rectangle *r3 = new Rectangle(20, 10);
	cout<<"r3: "<<endl;
	(*r3).display();
	cout<<endl;

	// Copy Constructor call
	Rectangle r4(r2);
	cout<<"r4 (r2): "<<endl;
	r4.display();

	Rectangle *r5 = new Rectangle(r4);
	cout<<"r5 (r4): "<<endl;
	r5 -> display();

	Rectangle *r6 = new Rectangle(*r3);
	cout<<"r6 (*r3): "<<endl;
	r6 -> display();

	delete r1;		// we have to manually deallocate memory of r1,r3,r5 & r6 because it is dynamically creted
	delete r3;
	delete r5;
	delete r6;

	return 0;
}




/*
OUTPUT: r: 
		Length: -946094248
		Breadth: 32631
		r1: 
		Length: 0
		Breadth: 0

		r2: 
		Length: 10
		Breadth: 5
		r3: 
		Length: 20
		Breadth: 10

		Copy Constructor
		r4 (r2): 
		Length: 10
		Breadth: 5
		Copy Constructor
		r5 (r4): 
		Length: 10
		Breadth: 5
		Copy Constructor
		r6 (*r3): 
		Length: 20
		Breadth: 10
		Destructor Called !
		Destructor Called !
		Destructor Called !
		Destructor Called !
		Destructor Called !
		Destructor Called !
		Destructor Called !
*/