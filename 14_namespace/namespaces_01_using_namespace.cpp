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

using namespace first;

int main()
{
	fun();
	second::fun();
}



/*
OUTPUT:	fun() first                                                          
		fun() second
*/