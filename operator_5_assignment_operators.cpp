# include <iostream>
using namespace std;

int main()
{
	int a=10,b=3;
	int c=10,d=3;
	int e=10,f=3;
	int g=10,h=3;
	int i=10,j=3;

	cout<<"a is: "<<a<<", b is: "<<b<<endl;
	cout<<"a += b is: "<< (a+=b) <<endl;
	cout<<"a is: "<<a<<endl<<endl;
	
	cout<<"c is: "<<c<<", d is: "<<d<<endl;
	cout<<"c -= d is: "<< (c-=d) <<endl;
	cout<<"c is: "<<c<<endl<<endl;
	
	cout<<"e is: "<<e<<", f is: "<<f<<endl;
	cout<<"e *= f is: "<< (e*=f) <<endl;
	cout<<"e is: "<<e<<endl<<endl;
	
	cout<<"g is: "<<g<<", h is: "<<h<<endl;
	cout<<"g /= h is: "<< (g/=h) <<endl;
	cout<<"g is: "<<g<<endl<<endl;
	
	cout<<"i is: "<<i<<", j is: "<<j<<endl;
	cout<<"i %= j is: "<< (i%=j) <<endl;
	cout<<"i is: "<<i<<endl;

	return 0;
}



/*
OUTPUT: a is: 10, b is: 3
		a += b is: 13
		a is: 13

		c is: 10, d is: 3
		c -= d is: 7
		c is: 7

		e is: 10, f is: 3
		e *= f is: 30
		e is: 30

		g is: 10, h is: 3
		g /= h is: 3
		g is: 3

		i is: 10, j is: 3
		i %= j is: 1
		i is: 1
*/