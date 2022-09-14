#include<iostream>
using namespace std;

int main()
{
	int num1,num2,num3,avg;
	cout<<"Enter three numbers:\n";
	cin>>num1>>num2>>num3;

	avg = (num1+num2+num3) / 3;
	cout<<"The average of three no. is:"<<avg<<endl;

	return 0;
}