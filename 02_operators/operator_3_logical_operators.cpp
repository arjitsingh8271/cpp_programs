/* 
Logical Operator
it return 1 or 0
*/
#include<iostream>
using namespace std;

int main()
{
	int a=4,b=5;

	cout<<"(a==b) && (a<b) is: "<<((a==b) && (a<b))<<endl;    // And
	cout<<"(a==b) || (a<b) is: "<<((a==b) || (a<b))<<endl;    // Or
	cout<<"! (a==b) is: "<<(!(a==b))<<endl;                   // Not
    
    return 0;
}



/*
OUTPUT: (a==b) && (a<b) is: 0
		(a==b) || (a<b) is: 1
		! (a==b) is: 1
*/