// Logical Operator

#include<iostream>
using namespace std;

int main()
{
	int a=4,b=5;

	cout<<"The value of (a==b) && (a<b) is:"<<((a==b) && (a<b))<<endl;    // And
	cout<<"The value of (a==b) || (a<b) is:"<<((a==b) || (a<b))<<endl;    // Or
	cout<<"The value of ! (a==b) is:"<<(!(a==b))<<endl;                     // Not
    
    return 0;
}