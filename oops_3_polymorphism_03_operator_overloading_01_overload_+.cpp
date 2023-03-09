/*
Operator Overloading (Compile-time Polymorphism) :
It is an idea of giving special meaning to an existing operator 
in c++ without changing its orignal meaning

It is a feature that allow you to define how operator behave 
when applied to an object of a class

eg: 5 + 5 = 10
	2.5 + 3.5 = 6.0
	'a' + 'b' = 195 becouse, a ASCII value is 97 , b ASCII value is 98
*/

// EXAMPLE
/*
Complex numbers are the numbers that 
are expressed in the form of a+ib 
where, a,b are real numbers and 
'i' is an imaginary number called “iota”.
i = (√-1))

eg:  5 + 8i
   + 4 + 9i
   ----------
     9 + 17i
   ----------

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

	Complex operator+(Complex x) // Let Complex add(Complex x)
	{
		Complex temp;
		temp.real = real + x.real;
		temp.img = img + x.img;

		return temp;
	}

	void display()
	{
		cout<<real<<" + i"<<img<<endl;
	}


};

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