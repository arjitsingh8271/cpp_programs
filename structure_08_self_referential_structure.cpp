




#include <iostream>
using namespace std;

struct self
{
	int n;
	char c;
	self *ptr; 			// struct self *ptr;	for C language
};

int main()
{
	self v1, v2;

	v1.n = 10;
	v1.c = 'A';
	v1.ptr = NULL;

	v2.n = 20;
	v2.c = 'B';
	v2.ptr = NULL;

	cout<<v1.n<<" "<<v1.c<<" "<<v1.ptr<<endl;
	cout<<v2.n<<" "<<v2.c<<" "<<v2.ptr<<endl;

	v1.ptr = &v2;
	
	cout<<v1.n<<" "<<v1.c<<" "<<v1.ptr<<endl;
	cout<<v1.ptr->n<<" "<<v1.ptr->c<<endl;

	return 0;
}



/*
OUTPUT: 10 A 0                                                                             
		20 B 0
		10 A 0x7ffccc77abb0
		20 B
*/