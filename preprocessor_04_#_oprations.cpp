/*
The # operator causes a replacement-text token to be converted to a string surrounded by quotes.
The # operator, which is generally called the stringize operator
*/


# include <iostream>
using namespace std;

#define msg(x) #x		//here its take  a string argument 'x' and convert into string

int main()
{
	cout<<msg(Hello whats up 44)<<endl;

	return 0;
}


/*
OUTPUT: Hello whats up 44
*/