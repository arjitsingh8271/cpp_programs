# include <iostream>
using namespace std;

class Rectangle
{
	int length;
	int breadth;
public:
	Rectangle(int length=0, int breadth=0)
	{
		if(length<0 || breadth<0)
			throw 1;
		else
		{
			this-> length = length;
			this-> breadth = breadth;
		}
	}

	void display()
	{
		cout<<"length: "<<length<<endl;
		cout<<"breadth: "<<breadth<<endl;
	}

	~Rectangle(){};
};

int main()
{
	try
	{
		Rectangle r1(10,5);
		r1.display();

		Rectangle r2(-1,5);
		r2.display();	
	}
	catch(int e)
	{
		cout<<"Error length & breadth can't be -ve"<<endl;
	}

}