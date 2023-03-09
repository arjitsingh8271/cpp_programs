/*
#include <iostream>
using namespace std;

class Rectangle
{
public:

	int length;
	int breadth;

	int area()
	{
		return length * breadth;
	}

	int perimeter()
	{
		return 2 * (length + breadth);
	}

};

int main()
{
	Rectangle r1;  
	r1.length = 8;
	r1.breadth = 3;

	cout<<"Area is: "<<r1.area()<<endl;
	cout<<"Perimeter: "<<r1.perimeter()<<endl;

	return 0;
}
*/


#include <iostream>
using namespace std;

class Rectangle
{
public:

	int length;
	int breadth;

	void setLength(int l)
	{
		length = l;
	}

	void setBreadth(int b)
	{
		breadth = b;
	}

	void display()
	{
		cout<<"Length: "<<length<<endl;
		cout<<"Breadth: "<<breadth<<endl;
	}

	int area()
	{
		return length * breadth;
	}

	int perimeter()
	{
		return 2 * (length + breadth);
	}

};

int main()
{
	Rectangle r1;  
	r1.setLength(8);
	r1.setBreadth(3);
	r1.display();

	cout<<"Area is: "<<r1.area()<<endl;
	cout<<"Perimeter: "<<r1.perimeter()<<endl;

	return 0;
}



/*
OUTPUT: Length: 8
		Breadth: 3
		Area is: 24
		Perimeter: 22
*/