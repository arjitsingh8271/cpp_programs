// C++ program using function to find power of number

#include <iostream>
using namespace std;

int power (int num1,int num2);

int main()
{
	int a,b;
	cout<<"Enter a number: ";
	cin>>a;
	cout<<"Enter power: ";
	cin>>b;

	cout<<a<<" to the power "<<b<<" is: "<<power(a,b)<<endl;
}

int power (int num1,int num2)
{
	int ans=1;
	for (int i = 0; i < num2; i++)
	{
		ans *= num1;           // ans = ans * num1;
	}
	return ans;
}