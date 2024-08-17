/*
<< insertion operator overloading using reference
cout is a ostream or output stream operator
*/

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

	friend ostream & operator<<(ostream &out, Complex &x);

	void display()
	{
		cout<<real<<" + i"<<img<<endl;
	}


};

ostream & operator<<(ostream &out, Complex &x) 
{
	out<<x.real<<" + i"<<x.img<<endl;
	
	return out;
}

int main()
{
	Complex c1(9,5);
	c1.display();
		// OR
	cout<<c1;
		// OR
	operator<<(cout,c1);
}




/*
OUTPUT:	9 + i5
		9 + i5
		9 + i5
*/