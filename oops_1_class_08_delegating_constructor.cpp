/*
Delegating Constructor:
When a constructor calls another constructor, it is 
known as constructor delegation and the constructor 
which does so is called the delegating constructor.

Syntax: Class(arguments) : Class(arguments) 
		{
   			// statements
		}

*/	

# include <iostream>
using namespace std;

class Rectangle
{
	int len;
	int bdth;
public:
		/*This constructor will be called when no argument-
        is passed during the object creation. This constructor-
        to initialize 'myVariable' with default value is calling-
        the parameterized constructor in the initialization list.*/
	Rectangle() : Rectangle{2,1} {}

		/*This construtor will be indirectly called by the non-
        parametrized constructor or direclty when the argument-
        is specified at object creation.*/
	Rectangle(int len, int bdth) : len{len}, bdth{bdth} {}

	void display()
	{
		cout<<"Length: "<<len<<endl;
		cout<<"Breadth: "<<bdth<<endl;
	}

};

int main()
{
	Rectangle r1, r2(10,5);
	r1.display();
	r2.display();
}



/*
OUTPUT: Length: 2                                                                              
		Breadth: 1
		Length: 10
		Breadth: 5
*/