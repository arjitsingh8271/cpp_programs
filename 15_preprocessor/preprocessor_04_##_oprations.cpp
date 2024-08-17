/*
Token-pasting operator (##)

Allows tokens used as actual arguments to be concatenated to form other tokens. 
It is often useful to merge two tokens into one while expanding macros. 
This is called token pasting or token concatenation
*/


# include <iostream>
using namespace std;

#define concat(a,b) a##b

int main()
{
	int x=100;
	cout<<concat(x,y)<<endl;

	return 0;
}



/*
OUTPUT: 100
*/