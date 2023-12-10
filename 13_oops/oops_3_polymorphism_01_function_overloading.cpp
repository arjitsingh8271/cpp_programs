/*
Function Overloading:
 
Function having same return type but different parameters.
*/

# include <iostream>
using namespace std;

class Add
{
public:
	int add(int a, int b)
	{
		return a+b;
	}

	int add(int a, int b, int c)
	{
		return a+b+c;
	}
};

int main()
{
	Add a1;

	cout<<"1+2= "<<a1.add(1,2)<<endl;
	cout<<"1+2+3= "<<a1.add(1,2,3)<<endl;
}




/*
OUTPUT:	1+2= 3
		1+2+3= 6
*/