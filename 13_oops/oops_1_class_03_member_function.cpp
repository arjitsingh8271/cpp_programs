// Methods or Member fuction are functions that belongs to the class.

#include<iostream>
using namespace std;

class hello
{
	public:
	
	void display()			// Method or Member function
	{
		cout<<"Hello World..!"<<endl;
	}
};

int main()
{
	hello xyz;
	xyz.display();			// Call the method

	return 0;
}


// Declear Member function outside class using :: scope resolution operator

/*
class hello
{
	public:
		void display();
};

void hello :: display()		// member function
{
	cout<<"Hello World..!"<<endl;
}

int main()
{
	hello xyz;
	xyz.display();			// Call the method

	return 0;
}
*/




// OUTPUT: Hello World..!
