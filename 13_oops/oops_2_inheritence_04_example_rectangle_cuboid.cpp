// Rectangle becomes Cuboid

/*
# include <iostream>
using namespace std;

class Rectangle
{
protected:
	int length;
	int breadth;
public:
	Rectangle(int length=0, int breadth=0)
	{
		this -> length = length;
		this -> breadth = breadth;
	}
	void display()
	{
		cout<<"Length: "<<length<<endl;
		cout<<"Breadth: "<<breadth<<endl;
	}

	int area()
	{
		return length*breadth;
	}

	int perimeter()
	{
		return (2*(length*breadth));
	}

	~Rectangle(){}
};

class Cuboid : private Rectangle
{
private:
	int height;
public:
	Cuboid(int length=0, int breadth=0, int height=0)
	{
		this -> length = length;
		this -> breadth = breadth;
		this -> height = height;
	}
	void show()
	{
		cout<<"Length: "<<length<<endl;
		cout<<"Breadth: "<<breadth<<endl;
		cout<<"Height: "<<height<<endl;
	}

	int volume()
	{
		return (area()*height);
	}

	~Cuboid(){};
};



int main()
{
	cout<<"Base Class:---"<<endl;
	Rectangle r1(10,5);
	r1.display();
	cout<<"Area: "<<r1.area()<<endl;
	cout<<"Perimeter: "<<r1.perimeter()<<endl;

	cout<<"Derived Class:---"<<endl;
	Cuboid c1(20,10,3);
	c1.show();
	cout<<"Volume: "<<c1.volume()<<endl;
}
*/


#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;
public:
	Rectangle()
	{
    	length = 1;
    	breadth = 1;
	}
	Rectangle(int l, int b)
	{
    	length = l;
    	breadth = b;
	}
	Rectangle(Rectangle & r)
	{
    	length = r.length;
    	breadth = r.breadth;
	}
    
    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }
	
	void setLength(int l)
	{
    	length = l;
	}
	void setBreadth(int b)
	{
    	breadth = b;
	}

	int Area()
	{
    	return length * breadth;
	}
	int Perimeter()
	{
    	return 2 * (length + breadth);
	}
};

class Cuboid : public Rectangle
{
private:
	int height;
public:
    Cuboid(int h)
    {
        height = h;
    }
    int getHeight()
    {
        return height;
    }
    void setHeight(int h)
    {
        height = h;
    }
    int Volume()
    {
	   return getLength() * getBreadth() * height;
    }
};



int main()
{
    Cuboid c(8);
    c.setLength(2);
    c.setBreadth(4);
    cout << "Volume is " << c.Volume() << endl;
    cout << "Area is " << c.Area() << endl;
    cout << "Perimeter is " << c.Perimeter() << endl;
}
