#include<iostream>
using namespace std;

// int sum(int num1,int num2);  // Acceptable function prototype
int sum(int, int);              // Acceptable function prototype
//int sum(int num1, num2);      // Not Acceptable function prototype


int sum(int num1,int num2)  // Formal Parameters here 'num1' and 'num2' will be taking value from actual patameters
{
	int num3 = num1 + num2;
	return num3;
}

int main()
{
	int a,b;               // here 'a' and 'b' is Actual Parameters
	cout<<"Enter two number to find sum: ";
	cin>>a>>b;

	cout<<"The sum is: "<<sum(a,b)<<endl;

	return 0;
}