# include <iostream>
using namespace std;

class Complex
{
	int real;
	int img;
public:
	Complex(int real=0, int img=0)
	{
		this-> real = real;
		this-> img = img;
	}

	friend Complex operator+(Complex x, Complex y);

	void display()
	{
		cout<<real<<" + i"<<img<<endl;
	}


};

Complex operator+(Complex x, Complex y)
{
	Complex temp;
	temp.real = x.real + y.real;
	temp.img = x.img + y.img;

	return temp;
}

int main()
{
	Complex c1(9,5);
	Complex c2(5,4);
	Complex c3;
	c3 = c1 + c2;  // Let c3 = c1.add(c2)
	//cout<<c3.real<<" + i"<<c3.img<<endl; //if real,img in public 
	c3.display();
}




/*
OUTPUT:	14 + i9
*/