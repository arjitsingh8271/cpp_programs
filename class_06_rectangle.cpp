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
	int l,b;

	cout<<"Enter Length: "<<endl;
	cin>>l;
	cout<<"Enter Breadth: "<<endl;
	cin>>b;

	Rectangle r1;  // Declare Object of Rectangle Class
	r1.length = l;
	r1.breadth = b;

	cout<<"Area is: "<<r1.area()<<endl;
	cout<<"Perimeter: "<<r1.perimeter()<<endl;

	return 0;
}