# include <iostream>
using namespace std;

class Fraction
{
	int num;	// Numerator
	int den;	// Denominator

public:
	Fraction(int num=0, int den=0)
	{
		this-> num = num;
		this-> den = den;
	}
	void display()
	{
		cout<<num<<"/"<<den<<endl;
	}

	// 1/2 * 2/3 = (1*2)/(2*3) = 2/6
	Fraction operator*(Fraction x)
	{
		Fraction temp;
		temp.num = num * x.num;
		temp.den = den * x.den;

		return temp;
	}

	// 1/2 / 2/3 = 1/2 * 3/2 = (1*3)/(2*2) = 3/4
	Fraction operator/(Fraction x)
	{
		Fraction temp;
		temp.num = num * x.den;
		temp.den = den * x.num;

		return temp;
	}

	// 1/2 + 2/3 = ((3*1)+(2*2))/6 = (3+4)/6 = 7/6
	Fraction operator+(Fraction x)
	{
		Fraction temp;
		int lcm = den * x.den;
		int a = lcm / den;
		int b = lcm / x.den;

		temp.num = (a*num) + (b*x.num);
		temp.den = lcm;

		return temp;
	}
	
	// 1/2 + 2/3 = ((3*1)-(2*2))/6 = (3+4)/6 = -(1/6)
	Fraction operator-(Fraction x)
	{
		Fraction temp;
		int lcm = den * x.den;
		int a = lcm / den;
		int b = lcm / x.den;

		temp.num = (a*num) - (b*x.num);
		temp.den = lcm;

		return temp;
	}

	~Fraction(){};
};

int main()
{
	Fraction f1(1,2), f2(2,3), f3(3,4), f4, f5, f6, f7, f8;
	f1.display();
	f2.display();
	f3.display();

	cout<<"Multiplication:"<<endl;
	f4 = f1*f2;
	f4.display();
	cout<<"Division:"<<endl;
	f5 = f1/f2;
	f5.display();
	cout<<"Addition:"<<endl;
	f6 = f1+f2;
	f6.display();
	f7 = f1+f2+f3;
	f7.display();
	cout<<"Subtraction:"<<endl;
	f8 = f1-f2;
	f8.display();

}




/*
OUTPUT:	1/2
		2/3
		3/4
		Multiplication:
		2/6
		Division:
		3/4
		Addition:
		7/6
		46/24
		Subtraction:
		-1/6
*/