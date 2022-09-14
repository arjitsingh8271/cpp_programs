#include <iostream>
using namespace std;

/* CALL BY VALUE
void square (int num1)
{
	num1=num1*num1;
	cout<<"The value in function is: "<<num1<<endl;
}
int main()
{
	int n;
	cout<<"Enter a number: ";
	cin>>n;

	square(n);
	cout<<"The value in main is: "<<n<<endl;  // we cant change the value of 'n' in main


	return 0;
}
*/
// CALL BY REFERENCE

void square (int &num1)
{
	num1=num1*num1;
	cout<<"The value in function is: "<<num1<<endl;
}
int main()
{
	int n;
	cout<<"Enter a number: ";
	cin>>n;

	square(n);
	cout<<"The value in main is: "<<n<<endl;  // we can change the value of 'n' in main


	return 0;
}