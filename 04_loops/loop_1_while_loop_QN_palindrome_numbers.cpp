/*

Palindrome:
when a number is equal to its inverse is known as palindrome no.
e.g 	121 = 121
		255 != 552
		444 = 444

*/


# include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Input: ";
	cin>>n;

	int temp=n, rev=0;

	while(n!=0)
	{
		rev=(rev*10)+(n%10);
		n/=10;
	}

	if(temp==rev)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;

	return 0;
}



/*
OUTPUT:	Input: 121
		Yes 
		
		Input: 255
		No
*/