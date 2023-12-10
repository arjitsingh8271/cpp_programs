/*
Write a program to find largest between 3 no. using ternary operator
*/

# include <iostream>
using namespace std;

int main()
{
	int a=5, b=6, c=7, max;

	max = (a>b?a:b) ? (b>c?b:c) : c;

	cout<<max<<endl;

}