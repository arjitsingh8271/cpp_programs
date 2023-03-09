#include <iostream>

using namespace std;

int &fun(int &a)
{
	cout<<a<<endl; 	//---> 10
	return a;
}

int main()
{
	int x=10;
	fun(x)=20;
	cout<<x<<endl;	//---> 20
	return 0;
}



/*
OUTPUT: 10
		20
*/