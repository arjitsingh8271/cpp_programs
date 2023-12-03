/*
Structure padding is a concept in C++ and other programming languages that 
involves adding empty bytes (padding) to a structure or class to ensure 
that the data members align properly in memory.

We can save the number of cycle by using the concept called padding. but memory will get wasted
*/



#include <iostream>
using namespace std;

struct abc
{
	char a;		// 1 byte
	char b;		// 1 byte
	int c;		// 4 byte
};

int main()
{
	abc var;
	cout<<sizeof(var)<<endl;
}


// OUTPUT: 8


/*
#include <iostream>
using namespace std;

struct abc
{
	char a;		// 1 byte
	int c;		// 4 byte
	char b;		// 1 byte
};

int main()
{
	abc var;
	cout<<sizeof(var)<<endl;
}


// OUTPUT: 12
*/