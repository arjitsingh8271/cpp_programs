# include <iostream>
using namespace std;

class Rectangle
{
	int len;
	int bdth;

public:
	Rectangle(){}

	Rectangle(int l, int b)
	{
		len = l;
		bdth = b;
	}

	void display()
	{
		cout<<"Length: "<<len<<endl;
		cout<<"breadth: "<<bdth<<endl;
	}

	~ Rectangle()
	{
		cout<<"Destructor Called !"<<endl;
	}
};

int main()
{
	Rectangle r;
	r.display();

	Rectangle r1(10,5);
	r1.display();

	Rectangle r2(r1);
	r2.display();

	Rectangle *r3 = new Rectangle(20,10);
	r3 -> display();
	delete r3;		// we have to manually deallocate memory of r3 because it is dynamically creted

	return 0;
}




/*
OUTPUT: Length: -231825576
		breadth: 32633
		Length: 10
		breadth: 5
		Length: 10
		breadth: 5
		Length: 20
		breadth: 10
		Destructor Called !
		Destructor Called !
		Destructor Called !
		Destructor Called !
*/