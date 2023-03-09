// Program to find prime numbers

#include <iostream>
using namespace std;

int main()
{
	int a;
	cout<<"Enter a number to find it is prime or not: ";
	cin>>a;

	if(a==1)
      cout<<a<<" is not a prime no."<<endl;

	else
   	{   
      	for(int i=2 ; i<a ; i++)
      	{	
         	if(a%i==0)
         	{
            	cout<<a<<" is not a prime number"<<endl;
            	return 0;
         	}
      	}
   
    	cout<<a<<" is a prime no."<<endl;
   	}

	return 0;
}