/*
Abstraction: means displaying only essential information and hiding the details.
Data Abstraction: means Hiding the data members in a class using Private or Protected Access Modifiers

*/

# include <iostream>
using namespace std;

class Rectangle
{
private:
	int length;
	int breadth;

public:
	// void set(int l, int b)
	// {
	// 	length = l;
	// 	breadth = b;
	// }
	//            OR

	void set(int length, int breadth)
	{
		this -> length = length;
		this -> breadth = breadth;
	}
	
	/*
	If the data member & paremeter name is same,
	in order to differentiate we use "this" keyword
	"this->(data_member_name) = (paremeter_name);"
	*/

	void display()
	{
		cout<<"Length: "<<length<<endl;
		cout<<"Breadth: "<<breadth<<endl;
	}
};

int main()
{
	Rectangle r1;
	r1.set(10, 5);

	r1.display();

	return 0;
}



/*
OUTPUT: Length: 10
		Breadth: 5
*/