// Write a program to find the largest between 3 numbers using ternery oprator.

# include <iostream>
using namespace std;

int main()
{
	int a,b,c,largest;
	cin>>a>>b>>c;

	largest = a>b?(a>c?a:c):(b>c?b:c);

	cout<<"Output: "<<largest<<endl;

	return 0;
}