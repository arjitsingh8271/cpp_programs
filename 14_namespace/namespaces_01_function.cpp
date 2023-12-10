/*
Namespaces:

Namespaces are used for removing name conflicts in C++. 
If you are writing multiple functions with the same name but are not overloaded, 
they are independent functions. They are not a part of the class. 
If you are writing multiple classes that have the same name, 
then there will be name conflicts.
*/

# include <iostream>
using namespace std;

namespace first
{
void fun()
{
	cout<<"fun() first"<<endl;
}
}

namespace second
{
void fun()
{
	cout<<"fun() second"<<endl;
}
}

int main()
{
	first::fun();
	second::fun();
}



/*
OUTPUT:	fun() first                                                          
		fun() second
*/