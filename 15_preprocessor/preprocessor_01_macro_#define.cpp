/*
A macro is a piece of code in a program that is replace by the value of the macro_name.
stntax: #define macro_name replace_text 
*/


# include <iostream>
using namespace std;

#define pi 3.14		//symbolic constant
#define c cout

int main()
{
	c<<"pi "<<pi<<endl;
	return 0;
}


/*
OUTPUT: pi 3.14
*/